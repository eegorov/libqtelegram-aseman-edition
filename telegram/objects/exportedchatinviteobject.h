// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_EXPORTEDCHATINVITE_OBJECT
#define LQTG_TYPE_EXPORTEDCHATINVITE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/exportedchatinvite.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT ExportedChatInviteObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ExportedChatInviteClassType)
    Q_PROPERTY(QString link READ link WRITE setLink NOTIFY linkChanged)
    Q_PROPERTY(ExportedChatInvite core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ExportedChatInviteClassType {
        TypeChatInviteEmpty,
        TypeChatInviteExported
    };

    ExportedChatInviteObject(const ExportedChatInvite &core, QObject *parent = 0);
    ExportedChatInviteObject(QObject *parent = 0);
    virtual ~ExportedChatInviteObject();

    void setLink(const QString &link);
    QString link() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ExportedChatInvite &core);
    ExportedChatInvite core() const;

    ExportedChatInviteObject &operator =(const ExportedChatInvite &b);
    bool operator ==(const ExportedChatInvite &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void linkChanged();

private Q_SLOTS:

private:
    ExportedChatInvite m_core;
};

inline ExportedChatInviteObject::ExportedChatInviteObject(const ExportedChatInvite &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline ExportedChatInviteObject::ExportedChatInviteObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline ExportedChatInviteObject::~ExportedChatInviteObject() {
}

inline void ExportedChatInviteObject::setLink(const QString &link) {
    if(m_core.link() == link) return;
    m_core.setLink(link);
    Q_EMIT linkChanged();
    Q_EMIT coreChanged();
}

inline QString ExportedChatInviteObject::link() const {
    return m_core.link();
}

inline ExportedChatInviteObject &ExportedChatInviteObject::operator =(const ExportedChatInvite &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT linkChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool ExportedChatInviteObject::operator ==(const ExportedChatInvite &b) const {
    return m_core == b;
}

inline void ExportedChatInviteObject::setClassType(quint32 classType) {
    ExportedChatInvite::ExportedChatInviteClassType result;
    switch(classType) {
    case TypeChatInviteEmpty:
        result = ExportedChatInvite::typeChatInviteEmpty;
        break;
    case TypeChatInviteExported:
        result = ExportedChatInvite::typeChatInviteExported;
        break;
    default:
        result = ExportedChatInvite::typeChatInviteEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 ExportedChatInviteObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ExportedChatInvite::typeChatInviteEmpty:
        result = TypeChatInviteEmpty;
        break;
    case ExportedChatInvite::typeChatInviteExported:
        result = TypeChatInviteExported;
        break;
    default:
        result = TypeChatInviteEmpty;
        break;
    }

    return result;
}

inline void ExportedChatInviteObject::setCore(const ExportedChatInvite &core) {
    operator =(core);
}

inline ExportedChatInvite ExportedChatInviteObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_EXPORTEDCHATINVITE_OBJECT
