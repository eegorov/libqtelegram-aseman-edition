// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "authexportedauthorizationobject.h"

AuthExportedAuthorizationObject::AuthExportedAuthorizationObject(const AuthExportedAuthorization &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AuthExportedAuthorizationObject::AuthExportedAuthorizationObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AuthExportedAuthorizationObject::~AuthExportedAuthorizationObject() {
}

void AuthExportedAuthorizationObject::setBytes(const QByteArray &bytes) {
    if(m_core.bytes() == bytes) return;
    m_core.setBytes(bytes);
    Q_EMIT bytesChanged();
    Q_EMIT coreChanged();
}

QByteArray AuthExportedAuthorizationObject::bytes() const {
    return m_core.bytes();
}

void AuthExportedAuthorizationObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 AuthExportedAuthorizationObject::id() const {
    return m_core.id();
}

AuthExportedAuthorizationObject &AuthExportedAuthorizationObject::operator =(const AuthExportedAuthorization &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT bytesChanged();
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AuthExportedAuthorizationObject::operator ==(const AuthExportedAuthorization &b) const {
    return m_core == b;
}

void AuthExportedAuthorizationObject::setClassType(quint32 classType) {
    AuthExportedAuthorization::AuthExportedAuthorizationType result;
    switch(classType) {
    case TypeAuthExportedAuthorization:
        result = AuthExportedAuthorization::typeAuthExportedAuthorization;
        break;
    default:
        result = AuthExportedAuthorization::typeAuthExportedAuthorization;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AuthExportedAuthorizationObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AuthExportedAuthorization::typeAuthExportedAuthorization:
        result = TypeAuthExportedAuthorization;
        break;
    default:
        result = TypeAuthExportedAuthorization;
        break;
    }

    return result;
}

void AuthExportedAuthorizationObject::setCore(const AuthExportedAuthorization &core) {
    operator =(core);
}

AuthExportedAuthorization AuthExportedAuthorizationObject::core() const {
    return m_core;
}

