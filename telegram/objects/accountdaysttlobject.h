// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTDAYSTTL_OBJECT
#define LQTG_TYPE_ACCOUNTDAYSTTL_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/accountdaysttl.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AccountDaysTTLObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AccountDaysTTLClassType)
    Q_PROPERTY(qint32 days READ days WRITE setDays NOTIFY daysChanged)
    Q_PROPERTY(AccountDaysTTL core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AccountDaysTTLClassType {
        TypeAccountDaysTTL
    };

    AccountDaysTTLObject(const AccountDaysTTL &core, QObject *parent = 0);
    AccountDaysTTLObject(QObject *parent = 0);
    virtual ~AccountDaysTTLObject();

    void setDays(qint32 days);
    qint32 days() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AccountDaysTTL &core);
    AccountDaysTTL core() const;

    AccountDaysTTLObject &operator =(const AccountDaysTTL &b);
    bool operator ==(const AccountDaysTTL &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void daysChanged();

private Q_SLOTS:

private:
    AccountDaysTTL m_core;
};

inline AccountDaysTTLObject::AccountDaysTTLObject(const AccountDaysTTL &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline AccountDaysTTLObject::AccountDaysTTLObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline AccountDaysTTLObject::~AccountDaysTTLObject() {
}

inline void AccountDaysTTLObject::setDays(qint32 days) {
    if(m_core.days() == days) return;
    m_core.setDays(days);
    Q_EMIT daysChanged();
    Q_EMIT coreChanged();
}

inline qint32 AccountDaysTTLObject::days() const {
    return m_core.days();
}

inline AccountDaysTTLObject &AccountDaysTTLObject::operator =(const AccountDaysTTL &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT daysChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool AccountDaysTTLObject::operator ==(const AccountDaysTTL &b) const {
    return m_core == b;
}

inline void AccountDaysTTLObject::setClassType(quint32 classType) {
    AccountDaysTTL::AccountDaysTTLClassType result;
    switch(classType) {
    case TypeAccountDaysTTL:
        result = AccountDaysTTL::typeAccountDaysTTL;
        break;
    default:
        result = AccountDaysTTL::typeAccountDaysTTL;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 AccountDaysTTLObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AccountDaysTTL::typeAccountDaysTTL:
        result = TypeAccountDaysTTL;
        break;
    default:
        result = TypeAccountDaysTTL;
        break;
    }

    return result;
}

inline void AccountDaysTTLObject::setCore(const AccountDaysTTL &core) {
    operator =(core);
}

inline AccountDaysTTL AccountDaysTTLObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_ACCOUNTDAYSTTL_OBJECT
