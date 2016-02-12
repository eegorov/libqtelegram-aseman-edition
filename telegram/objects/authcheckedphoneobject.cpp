// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "authcheckedphoneobject.h"

AuthCheckedPhoneObject::AuthCheckedPhoneObject(const AuthCheckedPhone &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AuthCheckedPhoneObject::AuthCheckedPhoneObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AuthCheckedPhoneObject::~AuthCheckedPhoneObject() {
}

void AuthCheckedPhoneObject::setPhoneRegistered(bool phoneRegistered) {
    if(m_core.phoneRegistered() == phoneRegistered) return;
    m_core.setPhoneRegistered(phoneRegistered);
    Q_EMIT phoneRegisteredChanged();
    Q_EMIT coreChanged();
}

bool AuthCheckedPhoneObject::phoneRegistered() const {
    return m_core.phoneRegistered();
}

AuthCheckedPhoneObject &AuthCheckedPhoneObject::operator =(const AuthCheckedPhone &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT phoneRegisteredChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AuthCheckedPhoneObject::operator ==(const AuthCheckedPhone &b) const {
    return m_core == b;
}

void AuthCheckedPhoneObject::setClassType(quint32 classType) {
    AuthCheckedPhone::AuthCheckedPhoneType result;
    switch(classType) {
    case TypeAuthCheckedPhone:
        result = AuthCheckedPhone::typeAuthCheckedPhone;
        break;
    default:
        result = AuthCheckedPhone::typeAuthCheckedPhone;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AuthCheckedPhoneObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AuthCheckedPhone::typeAuthCheckedPhone:
        result = TypeAuthCheckedPhone;
        break;
    default:
        result = TypeAuthCheckedPhone;
        break;
    }

    return result;
}

void AuthCheckedPhoneObject::setCore(const AuthCheckedPhone &core) {
    operator =(core);
}

AuthCheckedPhone AuthCheckedPhoneObject::core() const {
    return m_core;
}

