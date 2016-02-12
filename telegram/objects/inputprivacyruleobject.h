// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPRIVACYRULE_OBJECT
#define LQTG_TYPE_INPUTPRIVACYRULE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputprivacyrule.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputPrivacyRuleObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputPrivacyRuleType)
    Q_PROPERTY(QList<InputUser> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(InputPrivacyRule core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputPrivacyRuleType {
        TypeInputPrivacyValueAllowContacts,
        TypeInputPrivacyValueAllowAll,
        TypeInputPrivacyValueAllowUsers,
        TypeInputPrivacyValueDisallowContacts,
        TypeInputPrivacyValueDisallowAll,
        TypeInputPrivacyValueDisallowUsers
    };

    InputPrivacyRuleObject(const InputPrivacyRule &core, QObject *parent = 0);
    InputPrivacyRuleObject(QObject *parent = 0);
    virtual ~InputPrivacyRuleObject();

    void setUsers(const QList<InputUser> &users);
    QList<InputUser> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputPrivacyRule &core);
    InputPrivacyRule core() const;

    InputPrivacyRuleObject &operator =(const InputPrivacyRule &b);
    bool operator ==(const InputPrivacyRule &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void usersChanged();

private Q_SLOTS:

private:
    InputPrivacyRule m_core;
};

#endif // LQTG_TYPE_INPUTPRIVACYRULE_OBJECT
