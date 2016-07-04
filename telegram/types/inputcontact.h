// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTCONTACT
#define LQTG_TYPE_INPUTCONTACT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT InputContact : public TelegramTypeObject
{
public:
    enum InputContactClassType {
        typeInputPhoneContact = 0xf392b7f4
    };

    InputContact(InputContactClassType classType = typeInputPhoneContact, InboundPkt *in = 0);
    InputContact(InboundPkt *in);
    InputContact(const Null&);
    virtual ~InputContact();

    void setClientId(qint64 clientId);
    qint64 clientId() const;

    void setFirstName(const QString &firstName);
    QString firstName() const;

    void setLastName(const QString &lastName);
    QString lastName() const;

    void setPhone(const QString &phone);
    QString phone() const;

    void setClassType(InputContactClassType classType);
    InputContactClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputContact fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const InputContact &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_clientId;
    QString m_firstName;
    QString m_lastName;
    QString m_phone;
    InputContactClassType m_classType;
};

Q_DECLARE_METATYPE(InputContact)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputContact &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputContact &item);

inline InputContact::InputContact(InputContactClassType classType, InboundPkt *in) :
    m_clientId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline InputContact::InputContact(InboundPkt *in) :
    m_clientId(0),
    m_classType(typeInputPhoneContact)
{
    fetch(in);
}

inline InputContact::InputContact(const Null &null) :
    TelegramTypeObject(null),
    m_clientId(0),
    m_classType(typeInputPhoneContact)
{
}

inline InputContact::~InputContact() {
}

inline void InputContact::setClientId(qint64 clientId) {
    m_clientId = clientId;
}

inline qint64 InputContact::clientId() const {
    return m_clientId;
}

inline void InputContact::setFirstName(const QString &firstName) {
    m_firstName = firstName;
}

inline QString InputContact::firstName() const {
    return m_firstName;
}

inline void InputContact::setLastName(const QString &lastName) {
    m_lastName = lastName;
}

inline QString InputContact::lastName() const {
    return m_lastName;
}

inline void InputContact::setPhone(const QString &phone) {
    m_phone = phone;
}

inline QString InputContact::phone() const {
    return m_phone;
}

inline bool InputContact::operator ==(const InputContact &b) const {
    return m_classType == b.m_classType &&
           m_clientId == b.m_clientId &&
           m_firstName == b.m_firstName &&
           m_lastName == b.m_lastName &&
           m_phone == b.m_phone;
}

inline void InputContact::setClassType(InputContact::InputContactClassType classType) {
    m_classType = classType;
}

inline InputContact::InputContactClassType InputContact::classType() const {
    return m_classType;
}

inline bool InputContact::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPhoneContact: {
        m_clientId = in->fetchLong();
        m_phone = in->fetchQString();
        m_firstName = in->fetchQString();
        m_lastName = in->fetchQString();
        m_classType = static_cast<InputContactClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool InputContact::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPhoneContact: {
        out->appendLong(m_clientId);
        out->appendQString(m_phone);
        out->appendQString(m_firstName);
        out->appendQString(m_lastName);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> InputContact::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputPhoneContact: {
        result["classType"] = "InputContact::typeInputPhoneContact";
        result["clientId"] = QVariant::fromValue<qint64>(clientId());
        result["phone"] = QVariant::fromValue<QString>(phone());
        result["firstName"] = QVariant::fromValue<QString>(firstName());
        result["lastName"] = QVariant::fromValue<QString>(lastName());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline InputContact InputContact::fromMap(const QMap<QString, QVariant> &map) {
    InputContact result;
    if(map.value("classType").toString() == "InputContact::typeInputPhoneContact") {
        result.setClassType(typeInputPhoneContact);
        result.setClientId( map.value("clientId").value<qint64>() );
        result.setPhone( map.value("phone").value<QString>() );
        result.setFirstName( map.value("firstName").value<QString>() );
        result.setLastName( map.value("lastName").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray InputContact::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const InputContact &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputContact::typeInputPhoneContact:
        stream << item.clientId();
        stream << item.phone();
        stream << item.firstName();
        stream << item.lastName();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, InputContact &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputContact::InputContactClassType>(type));
    switch(type) {
    case InputContact::typeInputPhoneContact: {
        qint64 m_client_id;
        stream >> m_client_id;
        item.setClientId(m_client_id);
        QString m_phone;
        stream >> m_phone;
        item.setPhone(m_phone);
        QString m_first_name;
        stream >> m_first_name;
        item.setFirstName(m_first_name);
        QString m_last_name;
        stream >> m_last_name;
        item.setLastName(m_last_name);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_INPUTCONTACT
