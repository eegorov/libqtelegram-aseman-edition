// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPSUPPORT_OBJECT
#define LQTG_TYPE_HELPSUPPORT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/helpsupport.h"

#include <QPointer>
#include "userobject.h"

class LIBQTELEGRAMSHARED_EXPORT HelpSupportObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(HelpSupportType)
    Q_PROPERTY(QString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)
    Q_PROPERTY(UserObject* user READ user WRITE setUser NOTIFY userChanged)
    Q_PROPERTY(HelpSupport core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum HelpSupportType {
        TypeHelpSupport
    };

    HelpSupportObject(const HelpSupport &core, QObject *parent = 0);
    HelpSupportObject(QObject *parent = 0);
    virtual ~HelpSupportObject();

    void setPhoneNumber(const QString &phoneNumber);
    QString phoneNumber() const;

    void setUser(UserObject* user);
    UserObject* user() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const HelpSupport &core);
    HelpSupport core() const;

    HelpSupportObject &operator =(const HelpSupport &b);
    bool operator ==(const HelpSupport &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void phoneNumberChanged();
    void userChanged();

private Q_SLOTS:
    void coreUserChanged();

private:
    QPointer<UserObject> m_user;
    HelpSupport m_core;
};

#endif // LQTG_TYPE_HELPSUPPORT_OBJECT
