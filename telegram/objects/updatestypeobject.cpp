// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "updatestypeobject.h"

UpdatesTypeObject::UpdatesTypeObject(const UpdatesType &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_fwdFromId(0),
    m_media(0),
    m_update(0),
    m_core(core)
{
    m_fwdFromId = new PeerObject(m_core.fwdFromId(), this);
    connect(m_fwdFromId.data(), &PeerObject::coreChanged, this, &UpdatesTypeObject::coreFwdFromIdChanged);
    m_media = new MessageMediaObject(m_core.media(), this);
    connect(m_media.data(), &MessageMediaObject::coreChanged, this, &UpdatesTypeObject::coreMediaChanged);
    m_update = new UpdateObject(m_core.update(), this);
    connect(m_update.data(), &UpdateObject::coreChanged, this, &UpdatesTypeObject::coreUpdateChanged);
}

UpdatesTypeObject::UpdatesTypeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_fwdFromId(0),
    m_media(0),
    m_update(0),
    m_core()
{
    m_fwdFromId = new PeerObject(m_core.fwdFromId(), this);
    connect(m_fwdFromId.data(), &PeerObject::coreChanged, this, &UpdatesTypeObject::coreFwdFromIdChanged);
    m_media = new MessageMediaObject(m_core.media(), this);
    connect(m_media.data(), &MessageMediaObject::coreChanged, this, &UpdatesTypeObject::coreMediaChanged);
    m_update = new UpdateObject(m_core.update(), this);
    connect(m_update.data(), &UpdateObject::coreChanged, this, &UpdatesTypeObject::coreUpdateChanged);
}

UpdatesTypeObject::~UpdatesTypeObject() {
}

void UpdatesTypeObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::chatId() const {
    return m_core.chatId();
}

void UpdatesTypeObject::setChats(const QList<Chat> &chats) {
    if(m_core.chats() == chats) return;
    m_core.setChats(chats);
    Q_EMIT chatsChanged();
    Q_EMIT coreChanged();
}

QList<Chat> UpdatesTypeObject::chats() const {
    return m_core.chats();
}

void UpdatesTypeObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::date() const {
    return m_core.date();
}

void UpdatesTypeObject::setEntities(const QList<MessageEntity> &entities) {
    if(m_core.entities() == entities) return;
    m_core.setEntities(entities);
    Q_EMIT entitiesChanged();
    Q_EMIT coreChanged();
}

QList<MessageEntity> UpdatesTypeObject::entities() const {
    return m_core.entities();
}

void UpdatesTypeObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::flags() const {
    return m_core.flags();
}

void UpdatesTypeObject::setFromId(qint32 fromId) {
    if(m_core.fromId() == fromId) return;
    m_core.setFromId(fromId);
    Q_EMIT fromIdChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::fromId() const {
    return m_core.fromId();
}

void UpdatesTypeObject::setFwdDate(qint32 fwdDate) {
    if(m_core.fwdDate() == fwdDate) return;
    m_core.setFwdDate(fwdDate);
    Q_EMIT fwdDateChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::fwdDate() const {
    return m_core.fwdDate();
}

void UpdatesTypeObject::setFwdFromId(PeerObject* fwdFromId) {
    if(m_fwdFromId == fwdFromId) return;
    if(m_fwdFromId) delete m_fwdFromId;
    m_fwdFromId = fwdFromId;
    if(m_fwdFromId) {
        m_fwdFromId->setParent(this);
        m_core.setFwdFromId(m_fwdFromId->core());
        connect(m_fwdFromId.data(), &PeerObject::coreChanged, this, &UpdatesTypeObject::coreFwdFromIdChanged);
    }
    Q_EMIT fwdFromIdChanged();
    Q_EMIT coreChanged();
}

PeerObject*  UpdatesTypeObject::fwdFromId() const {
    return m_fwdFromId;
}

void UpdatesTypeObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::id() const {
    return m_core.id();
}

void UpdatesTypeObject::setMedia(MessageMediaObject* media) {
    if(m_media == media) return;
    if(m_media) delete m_media;
    m_media = media;
    if(m_media) {
        m_media->setParent(this);
        m_core.setMedia(m_media->core());
        connect(m_media.data(), &MessageMediaObject::coreChanged, this, &UpdatesTypeObject::coreMediaChanged);
    }
    Q_EMIT mediaChanged();
    Q_EMIT coreChanged();
}

MessageMediaObject*  UpdatesTypeObject::media() const {
    return m_media;
}

void UpdatesTypeObject::setMediaUnread(bool mediaUnread) {
    if(m_core.mediaUnread() == mediaUnread) return;
    m_core.setMediaUnread(mediaUnread);
    Q_EMIT mediaUnreadChanged();
    Q_EMIT coreChanged();
}

bool UpdatesTypeObject::mediaUnread() const {
    return m_core.mediaUnread();
}

void UpdatesTypeObject::setMentioned(bool mentioned) {
    if(m_core.mentioned() == mentioned) return;
    m_core.setMentioned(mentioned);
    Q_EMIT mentionedChanged();
    Q_EMIT coreChanged();
}

bool UpdatesTypeObject::mentioned() const {
    return m_core.mentioned();
}

void UpdatesTypeObject::setMessage(const QString &message) {
    if(m_core.message() == message) return;
    m_core.setMessage(message);
    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
}

QString UpdatesTypeObject::message() const {
    return m_core.message();
}

void UpdatesTypeObject::setOut(bool out) {
    if(m_core.out() == out) return;
    m_core.setOut(out);
    Q_EMIT outChanged();
    Q_EMIT coreChanged();
}

bool UpdatesTypeObject::out() const {
    return m_core.out();
}

void UpdatesTypeObject::setPts(qint32 pts) {
    if(m_core.pts() == pts) return;
    m_core.setPts(pts);
    Q_EMIT ptsChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::pts() const {
    return m_core.pts();
}

void UpdatesTypeObject::setPtsCount(qint32 ptsCount) {
    if(m_core.ptsCount() == ptsCount) return;
    m_core.setPtsCount(ptsCount);
    Q_EMIT ptsCountChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::ptsCount() const {
    return m_core.ptsCount();
}

void UpdatesTypeObject::setReplyToMsgId(qint32 replyToMsgId) {
    if(m_core.replyToMsgId() == replyToMsgId) return;
    m_core.setReplyToMsgId(replyToMsgId);
    Q_EMIT replyToMsgIdChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::replyToMsgId() const {
    return m_core.replyToMsgId();
}

void UpdatesTypeObject::setSeq(qint32 seq) {
    if(m_core.seq() == seq) return;
    m_core.setSeq(seq);
    Q_EMIT seqChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::seq() const {
    return m_core.seq();
}

void UpdatesTypeObject::setSeqStart(qint32 seqStart) {
    if(m_core.seqStart() == seqStart) return;
    m_core.setSeqStart(seqStart);
    Q_EMIT seqStartChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::seqStart() const {
    return m_core.seqStart();
}

void UpdatesTypeObject::setUnread(bool unread) {
    if(m_core.unread() == unread) return;
    m_core.setUnread(unread);
    Q_EMIT unreadChanged();
    Q_EMIT coreChanged();
}

bool UpdatesTypeObject::unread() const {
    return m_core.unread();
}

void UpdatesTypeObject::setUpdate(UpdateObject* update) {
    if(m_update == update) return;
    if(m_update) delete m_update;
    m_update = update;
    if(m_update) {
        m_update->setParent(this);
        m_core.setUpdate(m_update->core());
        connect(m_update.data(), &UpdateObject::coreChanged, this, &UpdatesTypeObject::coreUpdateChanged);
    }
    Q_EMIT updateChanged();
    Q_EMIT coreChanged();
}

UpdateObject*  UpdatesTypeObject::update() const {
    return m_update;
}

void UpdatesTypeObject::setUpdates(const QList<Update> &updates) {
    if(m_core.updates() == updates) return;
    m_core.setUpdates(updates);
    Q_EMIT updatesChanged();
    Q_EMIT coreChanged();
}

QList<Update> UpdatesTypeObject::updates() const {
    return m_core.updates();
}

void UpdatesTypeObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::userId() const {
    return m_core.userId();
}

void UpdatesTypeObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<User> UpdatesTypeObject::users() const {
    return m_core.users();
}

void UpdatesTypeObject::setViaBotId(qint32 viaBotId) {
    if(m_core.viaBotId() == viaBotId) return;
    m_core.setViaBotId(viaBotId);
    Q_EMIT viaBotIdChanged();
    Q_EMIT coreChanged();
}

qint32 UpdatesTypeObject::viaBotId() const {
    return m_core.viaBotId();
}

UpdatesTypeObject &UpdatesTypeObject::operator =(const UpdatesType &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_fwdFromId->setCore(b.fwdFromId());
    m_media->setCore(b.media());
    m_update->setCore(b.update());

    Q_EMIT chatIdChanged();
    Q_EMIT chatsChanged();
    Q_EMIT dateChanged();
    Q_EMIT entitiesChanged();
    Q_EMIT flagsChanged();
    Q_EMIT fromIdChanged();
    Q_EMIT fwdDateChanged();
    Q_EMIT fwdFromIdChanged();
    Q_EMIT idChanged();
    Q_EMIT mediaChanged();
    Q_EMIT mediaUnreadChanged();
    Q_EMIT mentionedChanged();
    Q_EMIT messageChanged();
    Q_EMIT outChanged();
    Q_EMIT ptsChanged();
    Q_EMIT ptsCountChanged();
    Q_EMIT replyToMsgIdChanged();
    Q_EMIT seqChanged();
    Q_EMIT seqStartChanged();
    Q_EMIT unreadChanged();
    Q_EMIT updateChanged();
    Q_EMIT updatesChanged();
    Q_EMIT userIdChanged();
    Q_EMIT usersChanged();
    Q_EMIT viaBotIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool UpdatesTypeObject::operator ==(const UpdatesType &b) const {
    return m_core == b;
}

void UpdatesTypeObject::setClassType(quint32 classType) {
    UpdatesType::UpdatesTypeType result;
    switch(classType) {
    case TypeUpdatesTooLong:
        result = UpdatesType::typeUpdatesTooLong;
        break;
    case TypeUpdateShortMessage:
        result = UpdatesType::typeUpdateShortMessage;
        break;
    case TypeUpdateShortChatMessage:
        result = UpdatesType::typeUpdateShortChatMessage;
        break;
    case TypeUpdateShort:
        result = UpdatesType::typeUpdateShort;
        break;
    case TypeUpdatesCombined:
        result = UpdatesType::typeUpdatesCombined;
        break;
    case TypeUpdates:
        result = UpdatesType::typeUpdates;
        break;
    case TypeUpdateShortSentMessage:
        result = UpdatesType::typeUpdateShortSentMessage;
        break;
    default:
        result = UpdatesType::typeUpdatesTooLong;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 UpdatesTypeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UpdatesType::typeUpdatesTooLong:
        result = TypeUpdatesTooLong;
        break;
    case UpdatesType::typeUpdateShortMessage:
        result = TypeUpdateShortMessage;
        break;
    case UpdatesType::typeUpdateShortChatMessage:
        result = TypeUpdateShortChatMessage;
        break;
    case UpdatesType::typeUpdateShort:
        result = TypeUpdateShort;
        break;
    case UpdatesType::typeUpdatesCombined:
        result = TypeUpdatesCombined;
        break;
    case UpdatesType::typeUpdates:
        result = TypeUpdates;
        break;
    case UpdatesType::typeUpdateShortSentMessage:
        result = TypeUpdateShortSentMessage;
        break;
    default:
        result = TypeUpdatesTooLong;
        break;
    }

    return result;
}

void UpdatesTypeObject::setCore(const UpdatesType &core) {
    operator =(core);
}

UpdatesType UpdatesTypeObject::core() const {
    return m_core;
}

void UpdatesTypeObject::coreFwdFromIdChanged() {
    if(m_core.fwdFromId() == m_fwdFromId->core()) return;
    m_core.setFwdFromId(m_fwdFromId->core());
    Q_EMIT fwdFromIdChanged();
    Q_EMIT coreChanged();
}

void UpdatesTypeObject::coreMediaChanged() {
    if(m_core.media() == m_media->core()) return;
    m_core.setMedia(m_media->core());
    Q_EMIT mediaChanged();
    Q_EMIT coreChanged();
}

void UpdatesTypeObject::coreUpdateChanged() {
    if(m_core.update() == m_update->core()) return;
    m_core.setUpdate(m_update->core());
    Q_EMIT updateChanged();
    Q_EMIT coreChanged();
}

