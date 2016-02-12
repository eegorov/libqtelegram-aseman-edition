// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "userobject.h"

UserObject::UserObject(const User &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_photo(0),
    m_status(0),
    m_core(core)
{
    m_photo = new UserProfilePhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &UserProfilePhotoObject::coreChanged, this, &UserObject::corePhotoChanged);
    m_status = new UserStatusObject(m_core.status(), this);
    connect(m_status.data(), &UserStatusObject::coreChanged, this, &UserObject::coreStatusChanged);
}

UserObject::UserObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_photo(0),
    m_status(0),
    m_core()
{
    m_photo = new UserProfilePhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &UserProfilePhotoObject::coreChanged, this, &UserObject::corePhotoChanged);
    m_status = new UserStatusObject(m_core.status(), this);
    connect(m_status.data(), &UserStatusObject::coreChanged, this, &UserObject::coreStatusChanged);
}

UserObject::~UserObject() {
}

void UserObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 UserObject::accessHash() const {
    return m_core.accessHash();
}

void UserObject::setBot(bool bot) {
    if(m_core.bot() == bot) return;
    m_core.setBot(bot);
    Q_EMIT botChanged();
    Q_EMIT coreChanged();
}

bool UserObject::bot() const {
    return m_core.bot();
}

void UserObject::setBotChatHistory(bool botChatHistory) {
    if(m_core.botChatHistory() == botChatHistory) return;
    m_core.setBotChatHistory(botChatHistory);
    Q_EMIT botChatHistoryChanged();
    Q_EMIT coreChanged();
}

bool UserObject::botChatHistory() const {
    return m_core.botChatHistory();
}

void UserObject::setBotInfoVersion(qint32 botInfoVersion) {
    if(m_core.botInfoVersion() == botInfoVersion) return;
    m_core.setBotInfoVersion(botInfoVersion);
    Q_EMIT botInfoVersionChanged();
    Q_EMIT coreChanged();
}

qint32 UserObject::botInfoVersion() const {
    return m_core.botInfoVersion();
}

void UserObject::setBotInlinePlaceholder(const QString &botInlinePlaceholder) {
    if(m_core.botInlinePlaceholder() == botInlinePlaceholder) return;
    m_core.setBotInlinePlaceholder(botInlinePlaceholder);
    Q_EMIT botInlinePlaceholderChanged();
    Q_EMIT coreChanged();
}

QString UserObject::botInlinePlaceholder() const {
    return m_core.botInlinePlaceholder();
}

void UserObject::setBotNochats(bool botNochats) {
    if(m_core.botNochats() == botNochats) return;
    m_core.setBotNochats(botNochats);
    Q_EMIT botNochatsChanged();
    Q_EMIT coreChanged();
}

bool UserObject::botNochats() const {
    return m_core.botNochats();
}

void UserObject::setContact(bool contact) {
    if(m_core.contact() == contact) return;
    m_core.setContact(contact);
    Q_EMIT contactChanged();
    Q_EMIT coreChanged();
}

bool UserObject::contact() const {
    return m_core.contact();
}

void UserObject::setDeleted(bool deleted) {
    if(m_core.deleted() == deleted) return;
    m_core.setDeleted(deleted);
    Q_EMIT deletedChanged();
    Q_EMIT coreChanged();
}

bool UserObject::deleted() const {
    return m_core.deleted();
}

void UserObject::setFirstName(const QString &firstName) {
    if(m_core.firstName() == firstName) return;
    m_core.setFirstName(firstName);
    Q_EMIT firstNameChanged();
    Q_EMIT coreChanged();
}

QString UserObject::firstName() const {
    return m_core.firstName();
}

void UserObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 UserObject::flags() const {
    return m_core.flags();
}

void UserObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 UserObject::id() const {
    return m_core.id();
}

void UserObject::setLastName(const QString &lastName) {
    if(m_core.lastName() == lastName) return;
    m_core.setLastName(lastName);
    Q_EMIT lastNameChanged();
    Q_EMIT coreChanged();
}

QString UserObject::lastName() const {
    return m_core.lastName();
}

void UserObject::setMutualContact(bool mutualContact) {
    if(m_core.mutualContact() == mutualContact) return;
    m_core.setMutualContact(mutualContact);
    Q_EMIT mutualContactChanged();
    Q_EMIT coreChanged();
}

bool UserObject::mutualContact() const {
    return m_core.mutualContact();
}

void UserObject::setPhone(const QString &phone) {
    if(m_core.phone() == phone) return;
    m_core.setPhone(phone);
    Q_EMIT phoneChanged();
    Q_EMIT coreChanged();
}

QString UserObject::phone() const {
    return m_core.phone();
}

void UserObject::setPhoto(UserProfilePhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &UserProfilePhotoObject::coreChanged, this, &UserObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

UserProfilePhotoObject*  UserObject::photo() const {
    return m_photo;
}

void UserObject::setRestricted(bool restricted) {
    if(m_core.restricted() == restricted) return;
    m_core.setRestricted(restricted);
    Q_EMIT restrictedChanged();
    Q_EMIT coreChanged();
}

bool UserObject::restricted() const {
    return m_core.restricted();
}

void UserObject::setRestrictionReason(const QString &restrictionReason) {
    if(m_core.restrictionReason() == restrictionReason) return;
    m_core.setRestrictionReason(restrictionReason);
    Q_EMIT restrictionReasonChanged();
    Q_EMIT coreChanged();
}

QString UserObject::restrictionReason() const {
    return m_core.restrictionReason();
}

void UserObject::setSelf(bool self) {
    if(m_core.self() == self) return;
    m_core.setSelf(self);
    Q_EMIT selfChanged();
    Q_EMIT coreChanged();
}

bool UserObject::self() const {
    return m_core.self();
}

void UserObject::setStatus(UserStatusObject* status) {
    if(m_status == status) return;
    if(m_status) delete m_status;
    m_status = status;
    if(m_status) {
        m_status->setParent(this);
        m_core.setStatus(m_status->core());
        connect(m_status.data(), &UserStatusObject::coreChanged, this, &UserObject::coreStatusChanged);
    }
    Q_EMIT statusChanged();
    Q_EMIT coreChanged();
}

UserStatusObject*  UserObject::status() const {
    return m_status;
}

void UserObject::setUsername(const QString &username) {
    if(m_core.username() == username) return;
    m_core.setUsername(username);
    Q_EMIT usernameChanged();
    Q_EMIT coreChanged();
}

QString UserObject::username() const {
    return m_core.username();
}

void UserObject::setVerified(bool verified) {
    if(m_core.verified() == verified) return;
    m_core.setVerified(verified);
    Q_EMIT verifiedChanged();
    Q_EMIT coreChanged();
}

bool UserObject::verified() const {
    return m_core.verified();
}

UserObject &UserObject::operator =(const User &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_photo->setCore(b.photo());
    m_status->setCore(b.status());

    Q_EMIT accessHashChanged();
    Q_EMIT botChanged();
    Q_EMIT botChatHistoryChanged();
    Q_EMIT botInfoVersionChanged();
    Q_EMIT botInlinePlaceholderChanged();
    Q_EMIT botNochatsChanged();
    Q_EMIT contactChanged();
    Q_EMIT deletedChanged();
    Q_EMIT firstNameChanged();
    Q_EMIT flagsChanged();
    Q_EMIT idChanged();
    Q_EMIT lastNameChanged();
    Q_EMIT mutualContactChanged();
    Q_EMIT phoneChanged();
    Q_EMIT photoChanged();
    Q_EMIT restrictedChanged();
    Q_EMIT restrictionReasonChanged();
    Q_EMIT selfChanged();
    Q_EMIT statusChanged();
    Q_EMIT usernameChanged();
    Q_EMIT verifiedChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool UserObject::operator ==(const User &b) const {
    return m_core == b;
}

void UserObject::setClassType(quint32 classType) {
    User::UserType result;
    switch(classType) {
    case TypeUserEmpty:
        result = User::typeUserEmpty;
        break;
    case TypeUser:
        result = User::typeUser;
        break;
    default:
        result = User::typeUserEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 UserObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case User::typeUserEmpty:
        result = TypeUserEmpty;
        break;
    case User::typeUser:
        result = TypeUser;
        break;
    default:
        result = TypeUserEmpty;
        break;
    }

    return result;
}

void UserObject::setCore(const User &core) {
    operator =(core);
}

User UserObject::core() const {
    return m_core;
}

void UserObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

void UserObject::coreStatusChanged() {
    if(m_core.status() == m_status->core()) return;
    m_core.setStatus(m_status->core());
    Q_EMIT statusChanged();
    Q_EMIT coreChanged();
}

