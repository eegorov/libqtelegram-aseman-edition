// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "userstatusobject.h"

UserStatusObject::UserStatusObject(const UserStatus &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

UserStatusObject::UserStatusObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

UserStatusObject::~UserStatusObject() {
}

void UserStatusObject::setExpires(qint32 expires) {
    if(m_core.expires() == expires) return;
    m_core.setExpires(expires);
    Q_EMIT expiresChanged();
    Q_EMIT coreChanged();
}

qint32 UserStatusObject::expires() const {
    return m_core.expires();
}

void UserStatusObject::setWasOnline(qint32 wasOnline) {
    if(m_core.wasOnline() == wasOnline) return;
    m_core.setWasOnline(wasOnline);
    Q_EMIT wasOnlineChanged();
    Q_EMIT coreChanged();
}

qint32 UserStatusObject::wasOnline() const {
    return m_core.wasOnline();
}

UserStatusObject &UserStatusObject::operator =(const UserStatus &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT expiresChanged();
    Q_EMIT wasOnlineChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool UserStatusObject::operator ==(const UserStatus &b) const {
    return m_core == b;
}

void UserStatusObject::setClassType(quint32 classType) {
    UserStatus::UserStatusType result;
    switch(classType) {
    case TypeUserStatusEmpty:
        result = UserStatus::typeUserStatusEmpty;
        break;
    case TypeUserStatusOnline:
        result = UserStatus::typeUserStatusOnline;
        break;
    case TypeUserStatusOffline:
        result = UserStatus::typeUserStatusOffline;
        break;
    case TypeUserStatusRecently:
        result = UserStatus::typeUserStatusRecently;
        break;
    case TypeUserStatusLastWeek:
        result = UserStatus::typeUserStatusLastWeek;
        break;
    case TypeUserStatusLastMonth:
        result = UserStatus::typeUserStatusLastMonth;
        break;
    default:
        result = UserStatus::typeUserStatusEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 UserStatusObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UserStatus::typeUserStatusEmpty:
        result = TypeUserStatusEmpty;
        break;
    case UserStatus::typeUserStatusOnline:
        result = TypeUserStatusOnline;
        break;
    case UserStatus::typeUserStatusOffline:
        result = TypeUserStatusOffline;
        break;
    case UserStatus::typeUserStatusRecently:
        result = TypeUserStatusRecently;
        break;
    case UserStatus::typeUserStatusLastWeek:
        result = TypeUserStatusLastWeek;
        break;
    case UserStatus::typeUserStatusLastMonth:
        result = TypeUserStatusLastMonth;
        break;
    default:
        result = TypeUserStatusEmpty;
        break;
    }

    return result;
}

void UserStatusObject::setCore(const UserStatus &core) {
    operator =(core);
}

UserStatus UserStatusObject::core() const {
    return m_core;
}

