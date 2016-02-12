// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_BOTCOMMAND_OBJECT
#define LQTG_TYPE_BOTCOMMAND_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/botcommand.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT BotCommandObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(BotCommandType)
    Q_PROPERTY(QString command READ command WRITE setCommand NOTIFY commandChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(BotCommand core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum BotCommandType {
        TypeBotCommand
    };

    BotCommandObject(const BotCommand &core, QObject *parent = 0);
    BotCommandObject(QObject *parent = 0);
    virtual ~BotCommandObject();

    void setCommand(const QString &command);
    QString command() const;

    void setDescription(const QString &description);
    QString description() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const BotCommand &core);
    BotCommand core() const;

    BotCommandObject &operator =(const BotCommand &b);
    bool operator ==(const BotCommand &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void commandChanged();
    void descriptionChanged();

private Q_SLOTS:

private:
    BotCommand m_core;
};

#endif // LQTG_TYPE_BOTCOMMAND_OBJECT
