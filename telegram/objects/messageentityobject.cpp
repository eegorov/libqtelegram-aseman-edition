// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messageentityobject.h"

MessageEntityObject::MessageEntityObject(const MessageEntity &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

MessageEntityObject::MessageEntityObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

MessageEntityObject::~MessageEntityObject() {
}

void MessageEntityObject::setLanguage(const QString &language) {
    if(m_core.language() == language) return;
    m_core.setLanguage(language);
    Q_EMIT languageChanged();
    Q_EMIT coreChanged();
}

QString MessageEntityObject::language() const {
    return m_core.language();
}

void MessageEntityObject::setLength(qint32 length) {
    if(m_core.length() == length) return;
    m_core.setLength(length);
    Q_EMIT lengthChanged();
    Q_EMIT coreChanged();
}

qint32 MessageEntityObject::length() const {
    return m_core.length();
}

void MessageEntityObject::setOffset(qint32 offset) {
    if(m_core.offset() == offset) return;
    m_core.setOffset(offset);
    Q_EMIT offsetChanged();
    Q_EMIT coreChanged();
}

qint32 MessageEntityObject::offset() const {
    return m_core.offset();
}

void MessageEntityObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

QString MessageEntityObject::url() const {
    return m_core.url();
}

MessageEntityObject &MessageEntityObject::operator =(const MessageEntity &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT languageChanged();
    Q_EMIT lengthChanged();
    Q_EMIT offsetChanged();
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool MessageEntityObject::operator ==(const MessageEntity &b) const {
    return m_core == b;
}

void MessageEntityObject::setClassType(quint32 classType) {
    MessageEntity::MessageEntityType result;
    switch(classType) {
    case TypeMessageEntityUnknown:
        result = MessageEntity::typeMessageEntityUnknown;
        break;
    case TypeMessageEntityMention:
        result = MessageEntity::typeMessageEntityMention;
        break;
    case TypeMessageEntityHashtag:
        result = MessageEntity::typeMessageEntityHashtag;
        break;
    case TypeMessageEntityBotCommand:
        result = MessageEntity::typeMessageEntityBotCommand;
        break;
    case TypeMessageEntityUrl:
        result = MessageEntity::typeMessageEntityUrl;
        break;
    case TypeMessageEntityEmail:
        result = MessageEntity::typeMessageEntityEmail;
        break;
    case TypeMessageEntityBold:
        result = MessageEntity::typeMessageEntityBold;
        break;
    case TypeMessageEntityItalic:
        result = MessageEntity::typeMessageEntityItalic;
        break;
    case TypeMessageEntityCode:
        result = MessageEntity::typeMessageEntityCode;
        break;
    case TypeMessageEntityPre:
        result = MessageEntity::typeMessageEntityPre;
        break;
    case TypeMessageEntityTextUrl:
        result = MessageEntity::typeMessageEntityTextUrl;
        break;
    default:
        result = MessageEntity::typeMessageEntityUnknown;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 MessageEntityObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageEntity::typeMessageEntityUnknown:
        result = TypeMessageEntityUnknown;
        break;
    case MessageEntity::typeMessageEntityMention:
        result = TypeMessageEntityMention;
        break;
    case MessageEntity::typeMessageEntityHashtag:
        result = TypeMessageEntityHashtag;
        break;
    case MessageEntity::typeMessageEntityBotCommand:
        result = TypeMessageEntityBotCommand;
        break;
    case MessageEntity::typeMessageEntityUrl:
        result = TypeMessageEntityUrl;
        break;
    case MessageEntity::typeMessageEntityEmail:
        result = TypeMessageEntityEmail;
        break;
    case MessageEntity::typeMessageEntityBold:
        result = TypeMessageEntityBold;
        break;
    case MessageEntity::typeMessageEntityItalic:
        result = TypeMessageEntityItalic;
        break;
    case MessageEntity::typeMessageEntityCode:
        result = TypeMessageEntityCode;
        break;
    case MessageEntity::typeMessageEntityPre:
        result = TypeMessageEntityPre;
        break;
    case MessageEntity::typeMessageEntityTextUrl:
        result = TypeMessageEntityTextUrl;
        break;
    default:
        result = TypeMessageEntityUnknown;
        break;
    }

    return result;
}

void MessageEntityObject::setCore(const MessageEntity &core) {
    operator =(core);
}

MessageEntity MessageEntityObject::core() const {
    return m_core;
}

