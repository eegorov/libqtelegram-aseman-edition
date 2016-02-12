// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "sendmessageactionobject.h"

SendMessageActionObject::SendMessageActionObject(const SendMessageAction &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

SendMessageActionObject::SendMessageActionObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

SendMessageActionObject::~SendMessageActionObject() {
}

void SendMessageActionObject::setProgress(qint32 progress) {
    if(m_core.progress() == progress) return;
    m_core.setProgress(progress);
    Q_EMIT progressChanged();
    Q_EMIT coreChanged();
}

qint32 SendMessageActionObject::progress() const {
    return m_core.progress();
}

SendMessageActionObject &SendMessageActionObject::operator =(const SendMessageAction &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT progressChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool SendMessageActionObject::operator ==(const SendMessageAction &b) const {
    return m_core == b;
}

void SendMessageActionObject::setClassType(quint32 classType) {
    SendMessageAction::SendMessageActionType result;
    switch(classType) {
    case TypeSendMessageTypingAction:
        result = SendMessageAction::typeSendMessageTypingAction;
        break;
    case TypeSendMessageCancelAction:
        result = SendMessageAction::typeSendMessageCancelAction;
        break;
    case TypeSendMessageRecordVideoAction:
        result = SendMessageAction::typeSendMessageRecordVideoAction;
        break;
    case TypeSendMessageUploadVideoAction:
        result = SendMessageAction::typeSendMessageUploadVideoAction;
        break;
    case TypeSendMessageRecordAudioAction:
        result = SendMessageAction::typeSendMessageRecordAudioAction;
        break;
    case TypeSendMessageUploadAudioAction:
        result = SendMessageAction::typeSendMessageUploadAudioAction;
        break;
    case TypeSendMessageUploadPhotoAction:
        result = SendMessageAction::typeSendMessageUploadPhotoAction;
        break;
    case TypeSendMessageUploadDocumentAction:
        result = SendMessageAction::typeSendMessageUploadDocumentAction;
        break;
    case TypeSendMessageGeoLocationAction:
        result = SendMessageAction::typeSendMessageGeoLocationAction;
        break;
    case TypeSendMessageChooseContactAction:
        result = SendMessageAction::typeSendMessageChooseContactAction;
        break;
    default:
        result = SendMessageAction::typeSendMessageTypingAction;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 SendMessageActionObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case SendMessageAction::typeSendMessageTypingAction:
        result = TypeSendMessageTypingAction;
        break;
    case SendMessageAction::typeSendMessageCancelAction:
        result = TypeSendMessageCancelAction;
        break;
    case SendMessageAction::typeSendMessageRecordVideoAction:
        result = TypeSendMessageRecordVideoAction;
        break;
    case SendMessageAction::typeSendMessageUploadVideoAction:
        result = TypeSendMessageUploadVideoAction;
        break;
    case SendMessageAction::typeSendMessageRecordAudioAction:
        result = TypeSendMessageRecordAudioAction;
        break;
    case SendMessageAction::typeSendMessageUploadAudioAction:
        result = TypeSendMessageUploadAudioAction;
        break;
    case SendMessageAction::typeSendMessageUploadPhotoAction:
        result = TypeSendMessageUploadPhotoAction;
        break;
    case SendMessageAction::typeSendMessageUploadDocumentAction:
        result = TypeSendMessageUploadDocumentAction;
        break;
    case SendMessageAction::typeSendMessageGeoLocationAction:
        result = TypeSendMessageGeoLocationAction;
        break;
    case SendMessageAction::typeSendMessageChooseContactAction:
        result = TypeSendMessageChooseContactAction;
        break;
    default:
        result = TypeSendMessageTypingAction;
        break;
    }

    return result;
}

void SendMessageActionObject::setCore(const SendMessageAction &core) {
    operator =(core);
}

SendMessageAction SendMessageActionObject::core() const {
    return m_core;
}

