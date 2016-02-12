// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channelparticipantsfilterobject.h"

ChannelParticipantsFilterObject::ChannelParticipantsFilterObject(const ChannelParticipantsFilter &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ChannelParticipantsFilterObject::ChannelParticipantsFilterObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ChannelParticipantsFilterObject::~ChannelParticipantsFilterObject() {
}

ChannelParticipantsFilterObject &ChannelParticipantsFilterObject::operator =(const ChannelParticipantsFilter &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT coreChanged();
    return *this;
}

bool ChannelParticipantsFilterObject::operator ==(const ChannelParticipantsFilter &b) const {
    return m_core == b;
}

void ChannelParticipantsFilterObject::setClassType(quint32 classType) {
    ChannelParticipantsFilter::ChannelParticipantsFilterType result;
    switch(classType) {
    case TypeChannelParticipantsRecent:
        result = ChannelParticipantsFilter::typeChannelParticipantsRecent;
        break;
    case TypeChannelParticipantsAdmins:
        result = ChannelParticipantsFilter::typeChannelParticipantsAdmins;
        break;
    case TypeChannelParticipantsKicked:
        result = ChannelParticipantsFilter::typeChannelParticipantsKicked;
        break;
    case TypeChannelParticipantsBots:
        result = ChannelParticipantsFilter::typeChannelParticipantsBots;
        break;
    default:
        result = ChannelParticipantsFilter::typeChannelParticipantsRecent;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChannelParticipantsFilterObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChannelParticipantsFilter::typeChannelParticipantsRecent:
        result = TypeChannelParticipantsRecent;
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsAdmins:
        result = TypeChannelParticipantsAdmins;
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsKicked:
        result = TypeChannelParticipantsKicked;
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBots:
        result = TypeChannelParticipantsBots;
        break;
    default:
        result = TypeChannelParticipantsRecent;
        break;
    }

    return result;
}

void ChannelParticipantsFilterObject::setCore(const ChannelParticipantsFilter &core) {
    operator =(core);
}

ChannelParticipantsFilter ChannelParticipantsFilterObject::core() const {
    return m_core;
}

