// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountprivacyrulesobject.h"

AccountPrivacyRulesObject::AccountPrivacyRulesObject(const AccountPrivacyRules &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AccountPrivacyRulesObject::AccountPrivacyRulesObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AccountPrivacyRulesObject::~AccountPrivacyRulesObject() {
}

void AccountPrivacyRulesObject::setRules(const QList<PrivacyRule> &rules) {
    if(m_core.rules() == rules) return;
    m_core.setRules(rules);
    Q_EMIT rulesChanged();
    Q_EMIT coreChanged();
}

QList<PrivacyRule> AccountPrivacyRulesObject::rules() const {
    return m_core.rules();
}

void AccountPrivacyRulesObject::setUsers(const QList<User> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<User> AccountPrivacyRulesObject::users() const {
    return m_core.users();
}

AccountPrivacyRulesObject &AccountPrivacyRulesObject::operator =(const AccountPrivacyRules &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT rulesChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AccountPrivacyRulesObject::operator ==(const AccountPrivacyRules &b) const {
    return m_core == b;
}

void AccountPrivacyRulesObject::setClassType(quint32 classType) {
    AccountPrivacyRules::AccountPrivacyRulesType result;
    switch(classType) {
    case TypeAccountPrivacyRules:
        result = AccountPrivacyRules::typeAccountPrivacyRules;
        break;
    default:
        result = AccountPrivacyRules::typeAccountPrivacyRules;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AccountPrivacyRulesObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AccountPrivacyRules::typeAccountPrivacyRules:
        result = TypeAccountPrivacyRules;
        break;
    default:
        result = TypeAccountPrivacyRules;
        break;
    }

    return result;
}

void AccountPrivacyRulesObject::setCore(const AccountPrivacyRules &core) {
    operator =(core);
}

AccountPrivacyRules AccountPrivacyRulesObject::core() const {
    return m_core;
}

