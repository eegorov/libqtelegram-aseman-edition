#define METHOD_DEFINE QString("https://api.telegram.org/bot" + p->token + "/" + __FUNCTION__)

#include "telegrambot.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrlQuery>

class TelegramBotPrivate
{
public:
    QNetworkAccessManager *manager;
    QString token;
};

TelegramBot::TelegramBot(const QString &token, QObject *parent) :
    TelegramBot(parent)
{
    p->token = token;
}

TelegramBot::TelegramBot(QObject *parent) :
    QObject(parent)
{
    p = new TelegramBotPrivate;
    p->manager = new QNetworkAccessManager(this);
}

void TelegramBot::getMe(Callback<BotUser> callback)
{
    QUrlQuery query = QUrlQuery();

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotUser>(callback, res.toMap(), error);
    });
}

void TelegramBot::getUpdates(Callback<QList<BotUpdate> > callback, qint32 offset, qint32 limit, qint32 timeout, const QStringList &allowed_updates)
{
    QUrlQuery query = QUrlQuery();
    if(offset) query.addQueryItem("offset", QString::number(offset));
    if(limit) query.addQueryItem("limit", QString::number(limit));
    if(timeout) query.addQueryItem("timeout", QString::number(timeout));
    for(const QString &alupd: allowed_updates)
        query.addQueryItem("allowed_updates[]", alupd);

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        QList<BotUpdate> list;
        for(const QVariant &var: res.toList())
            list << BotUpdate(var.toMap());

        _callCallback<QList<BotUpdate> >(callback, list, error);
    });
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotInlineKeyboardMarkup &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardMarkup &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotReplyKeyboardRemove &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const BotForceReply &reply_markup)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, reply_markup.toMap());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id)
{
    sendMessage(chat_id, text, callback, parse_mode, disable_web_page_preview, disable_notification, reply_to_message_id, QMap<QString, QVariant>());
}

void TelegramBot::sendMessage(const QString &chat_id, const QString &text, Callback<BotMessage> callback, const QString &parse_mode, bool disable_web_page_preview, bool disable_notification, int reply_to_message_id, const QMap<QString, QVariant> &reply_markup)
{
    QUrlQuery query = QUrlQuery();
    query.addQueryItem("chat_id", chat_id.toInt()? QString::number(chat_id.toInt()) : chat_id);
    query.addQueryItem("text", text);
    if(parse_mode.count()) query.addQueryItem("parse_mode", parse_mode);
    if(disable_web_page_preview) query.addQueryItem("disable_web_page_preview", disable_web_page_preview?"true":"false");
    if(disable_notification) query.addQueryItem("disable_notification", disable_notification?"true":"false");
    if(reply_to_message_id) query.addQueryItem("reply_to_message_id", QString::number(reply_to_message_id));
    if(reply_markup.count()) {
        QJsonDocument doc( QJsonObject::fromVariantMap(reply_markup) );
        query.addQueryItem("reply_markup", doc.toJson(QJsonDocument::Compact));
    }

    postQuery(__FUNCTION__, query, [this, callback](const QVariant &res, const CallbackError &error){
        _callCallback<BotMessage>(callback, res.toMap(), error);
    });
}

void TelegramBot::postQuery(const QString &method, const QUrlQuery &query, std::function<void (const QVariant &res, const CallbackError &error)> callback)
{
    QSslConfiguration config(QSslConfiguration::defaultConfiguration());

    QUrl url = QUrl("https://api.telegram.org/bot" + p->token + "/" + method);
    url.setQuery(query);

    QNetworkRequest request;
    request.setSslConfiguration(config);
    request.setRawHeader("Accept", "application/xml");
    request.setRawHeader("Content-Type", "application/xml");
    request.setUrl(url);

    QNetworkReply *reply = p->manager->get(request);

    connect(reply, &QNetworkReply::finished, this, [this, callback, reply](){
        QByteArray result = reply->readAll();
        reply->deleteLater();

        QJsonDocument json = QJsonDocument::fromJson(result);
        if(!json.isObject())
        {
            callback(QVariant(), apiError());
            return;
        }

        QJsonObject object = json.object();
        QVariantHash hash = object.toVariantHash();
        if(!hash.value("ok").toBool()) {
            CallbackError error;
            error.errorCode = hash.value("error_code").toInt();
            error.errorText = hash.value("description").toString();
            error.null = false;
            callback(QVariant(), CallbackError());
        }

        callback(hash.value("result"), CallbackError());
    });

    connect(reply, &QNetworkReply::sslErrors, this, &TelegramBot::sslErrors);
    connect(reply, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::error), this, &TelegramBot::error);
}

void TelegramBot::setToken(const QString &token)
{
    p->token = token;
}

QString TelegramBot::token() const
{
    return p->token;
}

void TelegramBot::error(QNetworkReply::NetworkError error)
{
    Q_UNUSED(error)
}

void TelegramBot::sslErrors(const QList<QSslError> &errors)
{
    Q_UNUSED(errors)
}

TelegramBot::~TelegramBot()
{
    delete p;
}
