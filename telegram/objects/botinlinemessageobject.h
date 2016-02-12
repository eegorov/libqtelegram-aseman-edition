// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_BOTINLINEMESSAGE_OBJECT
#define LQTG_TYPE_BOTINLINEMESSAGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/botinlinemessage.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT BotInlineMessageObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(BotInlineMessageType)
    Q_PROPERTY(QString caption READ caption WRITE setCaption NOTIFY captionChanged)
    Q_PROPERTY(QList<MessageEntity> entities READ entities WRITE setEntities NOTIFY entitiesChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(bool noWebpage READ noWebpage WRITE setNoWebpage NOTIFY noWebpageChanged)
    Q_PROPERTY(BotInlineMessage core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum BotInlineMessageType {
        TypeBotInlineMessageMediaAuto,
        TypeBotInlineMessageText
    };

    BotInlineMessageObject(const BotInlineMessage &core, QObject *parent = 0);
    BotInlineMessageObject(QObject *parent = 0);
    virtual ~BotInlineMessageObject();

    void setCaption(const QString &caption);
    QString caption() const;

    void setEntities(const QList<MessageEntity> &entities);
    QList<MessageEntity> entities() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMessage(const QString &message);
    QString message() const;

    void setNoWebpage(bool noWebpage);
    bool noWebpage() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const BotInlineMessage &core);
    BotInlineMessage core() const;

    BotInlineMessageObject &operator =(const BotInlineMessage &b);
    bool operator ==(const BotInlineMessage &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void captionChanged();
    void entitiesChanged();
    void flagsChanged();
    void messageChanged();
    void noWebpageChanged();

private Q_SLOTS:

private:
    BotInlineMessage m_core;
};

#endif // LQTG_TYPE_BOTINLINEMESSAGE_OBJECT
