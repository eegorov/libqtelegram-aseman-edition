// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELSCHANNELPARTICIPANTS_OBJECT
#define LQTG_TYPE_CHANNELSCHANNELPARTICIPANTS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/channelschannelparticipants.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ChannelsChannelParticipantsObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ChannelsChannelParticipantsType)
    Q_PROPERTY(qint32 count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(QList<ChannelParticipant> participants READ participants WRITE setParticipants NOTIFY participantsChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(ChannelsChannelParticipants core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ChannelsChannelParticipantsType {
        TypeChannelsChannelParticipants
    };

    ChannelsChannelParticipantsObject(const ChannelsChannelParticipants &core, QObject *parent = 0);
    ChannelsChannelParticipantsObject(QObject *parent = 0);
    virtual ~ChannelsChannelParticipantsObject();

    void setCount(qint32 count);
    qint32 count() const;

    void setParticipants(const QList<ChannelParticipant> &participants);
    QList<ChannelParticipant> participants() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ChannelsChannelParticipants &core);
    ChannelsChannelParticipants core() const;

    ChannelsChannelParticipantsObject &operator =(const ChannelsChannelParticipants &b);
    bool operator ==(const ChannelsChannelParticipants &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void countChanged();
    void participantsChanged();
    void usersChanged();

private Q_SLOTS:

private:
    ChannelsChannelParticipants m_core;
};

#endif // LQTG_TYPE_CHANNELSCHANNELPARTICIPANTS_OBJECT
