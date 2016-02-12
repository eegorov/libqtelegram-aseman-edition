// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESDHCONFIG_OBJECT
#define LQTG_TYPE_MESSAGESDHCONFIG_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesdhconfig.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesDhConfigObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesDhConfigType)
    Q_PROPERTY(qint32 g READ g WRITE setG NOTIFY gChanged)
    Q_PROPERTY(QByteArray p READ p WRITE setP NOTIFY pChanged)
    Q_PROPERTY(QByteArray random READ random WRITE setRandom NOTIFY randomChanged)
    Q_PROPERTY(qint32 version READ version WRITE setVersion NOTIFY versionChanged)
    Q_PROPERTY(MessagesDhConfig core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesDhConfigType {
        TypeMessagesDhConfigNotModified,
        TypeMessagesDhConfig
    };

    MessagesDhConfigObject(const MessagesDhConfig &core, QObject *parent = 0);
    MessagesDhConfigObject(QObject *parent = 0);
    virtual ~MessagesDhConfigObject();

    void setG(qint32 g);
    qint32 g() const;

    void setP(const QByteArray &p);
    QByteArray p() const;

    void setRandom(const QByteArray &random);
    QByteArray random() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesDhConfig &core);
    MessagesDhConfig core() const;

    MessagesDhConfigObject &operator =(const MessagesDhConfig &b);
    bool operator ==(const MessagesDhConfig &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void gChanged();
    void pChanged();
    void randomChanged();
    void versionChanged();

private Q_SLOTS:

private:
    MessagesDhConfig m_core;
};

#endif // LQTG_TYPE_MESSAGESDHCONFIG_OBJECT
