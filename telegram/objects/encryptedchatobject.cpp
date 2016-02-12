// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "encryptedchatobject.h"

EncryptedChatObject::EncryptedChatObject(const EncryptedChat &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

EncryptedChatObject::EncryptedChatObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

EncryptedChatObject::~EncryptedChatObject() {
}

void EncryptedChatObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 EncryptedChatObject::accessHash() const {
    return m_core.accessHash();
}

void EncryptedChatObject::setAdminId(qint32 adminId) {
    if(m_core.adminId() == adminId) return;
    m_core.setAdminId(adminId);
    Q_EMIT adminIdChanged();
    Q_EMIT coreChanged();
}

qint32 EncryptedChatObject::adminId() const {
    return m_core.adminId();
}

void EncryptedChatObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 EncryptedChatObject::date() const {
    return m_core.date();
}

void EncryptedChatObject::setGA(const QByteArray &gA) {
    if(m_core.gA() == gA) return;
    m_core.setGA(gA);
    Q_EMIT gAChanged();
    Q_EMIT coreChanged();
}

QByteArray EncryptedChatObject::gA() const {
    return m_core.gA();
}

void EncryptedChatObject::setGAOrB(const QByteArray &gAOrB) {
    if(m_core.gAOrB() == gAOrB) return;
    m_core.setGAOrB(gAOrB);
    Q_EMIT gAOrBChanged();
    Q_EMIT coreChanged();
}

QByteArray EncryptedChatObject::gAOrB() const {
    return m_core.gAOrB();
}

void EncryptedChatObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 EncryptedChatObject::id() const {
    return m_core.id();
}

void EncryptedChatObject::setKeyFingerprint(qint64 keyFingerprint) {
    if(m_core.keyFingerprint() == keyFingerprint) return;
    m_core.setKeyFingerprint(keyFingerprint);
    Q_EMIT keyFingerprintChanged();
    Q_EMIT coreChanged();
}

qint64 EncryptedChatObject::keyFingerprint() const {
    return m_core.keyFingerprint();
}

void EncryptedChatObject::setParticipantId(qint32 participantId) {
    if(m_core.participantId() == participantId) return;
    m_core.setParticipantId(participantId);
    Q_EMIT participantIdChanged();
    Q_EMIT coreChanged();
}

qint32 EncryptedChatObject::participantId() const {
    return m_core.participantId();
}

EncryptedChatObject &EncryptedChatObject::operator =(const EncryptedChat &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT accessHashChanged();
    Q_EMIT adminIdChanged();
    Q_EMIT dateChanged();
    Q_EMIT gAChanged();
    Q_EMIT gAOrBChanged();
    Q_EMIT idChanged();
    Q_EMIT keyFingerprintChanged();
    Q_EMIT participantIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool EncryptedChatObject::operator ==(const EncryptedChat &b) const {
    return m_core == b;
}

void EncryptedChatObject::setClassType(quint32 classType) {
    EncryptedChat::EncryptedChatType result;
    switch(classType) {
    case TypeEncryptedChatEmpty:
        result = EncryptedChat::typeEncryptedChatEmpty;
        break;
    case TypeEncryptedChatWaiting:
        result = EncryptedChat::typeEncryptedChatWaiting;
        break;
    case TypeEncryptedChatRequested:
        result = EncryptedChat::typeEncryptedChatRequested;
        break;
    case TypeEncryptedChat:
        result = EncryptedChat::typeEncryptedChat;
        break;
    case TypeEncryptedChatDiscarded:
        result = EncryptedChat::typeEncryptedChatDiscarded;
        break;
    default:
        result = EncryptedChat::typeEncryptedChatEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 EncryptedChatObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case EncryptedChat::typeEncryptedChatEmpty:
        result = TypeEncryptedChatEmpty;
        break;
    case EncryptedChat::typeEncryptedChatWaiting:
        result = TypeEncryptedChatWaiting;
        break;
    case EncryptedChat::typeEncryptedChatRequested:
        result = TypeEncryptedChatRequested;
        break;
    case EncryptedChat::typeEncryptedChat:
        result = TypeEncryptedChat;
        break;
    case EncryptedChat::typeEncryptedChatDiscarded:
        result = TypeEncryptedChatDiscarded;
        break;
    default:
        result = TypeEncryptedChatEmpty;
        break;
    }

    return result;
}

void EncryptedChatObject::setCore(const EncryptedChat &core) {
    operator =(core);
}

EncryptedChat EncryptedChatObject::core() const {
    return m_core;
}

