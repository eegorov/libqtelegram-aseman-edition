// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTNOTIFYPEER_OBJECT
#define LQTG_TYPE_INPUTNOTIFYPEER_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputnotifypeer.h"

#include <QPointer>
#include "inputpeerobject.h"

class LIBQTELEGRAMSHARED_EXPORT InputNotifyPeerObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputNotifyPeerType)
    Q_PROPERTY(InputPeerObject* peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(InputNotifyPeer core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputNotifyPeerType {
        TypeInputNotifyPeer,
        TypeInputNotifyUsers,
        TypeInputNotifyChats,
        TypeInputNotifyAll
    };

    InputNotifyPeerObject(const InputNotifyPeer &core, QObject *parent = 0);
    InputNotifyPeerObject(QObject *parent = 0);
    virtual ~InputNotifyPeerObject();

    void setPeer(InputPeerObject* peer);
    InputPeerObject* peer() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputNotifyPeer &core);
    InputNotifyPeer core() const;

    InputNotifyPeerObject &operator =(const InputNotifyPeer &b);
    bool operator ==(const InputNotifyPeer &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void peerChanged();

private Q_SLOTS:
    void corePeerChanged();

private:
    QPointer<InputPeerObject> m_peer;
    InputNotifyPeer m_core;
};

#endif // LQTG_TYPE_INPUTNOTIFYPEER_OBJECT
