// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHAUTHORIZATION
#define LQTG_TYPE_AUTHAUTHORIZATION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT AuthAuthorization : public TelegramTypeObject
{
public:
    enum AuthAuthorizationClassType {
        typeAuthAuthorization = 0xff036af1
    };

    AuthAuthorization(AuthAuthorizationClassType classType = typeAuthAuthorization, InboundPkt *in = 0);
    AuthAuthorization(InboundPkt *in);
    AuthAuthorization(const Null&);
    virtual ~AuthAuthorization();

    void setUser(const User &user);
    User user() const;

    void setClassType(AuthAuthorizationClassType classType);
    AuthAuthorizationClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static AuthAuthorization fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const AuthAuthorization &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    User m_user;
    AuthAuthorizationClassType m_classType;
};

Q_DECLARE_METATYPE(AuthAuthorization)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const AuthAuthorization &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, AuthAuthorization &item);

inline AuthAuthorization::AuthAuthorization(AuthAuthorizationClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

inline AuthAuthorization::AuthAuthorization(InboundPkt *in) :
    m_classType(typeAuthAuthorization)
{
    fetch(in);
}

inline AuthAuthorization::AuthAuthorization(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeAuthAuthorization)
{
}

inline AuthAuthorization::~AuthAuthorization() {
}

inline void AuthAuthorization::setUser(const User &user) {
    m_user = user;
}

inline User AuthAuthorization::user() const {
    return m_user;
}

inline bool AuthAuthorization::operator ==(const AuthAuthorization &b) const {
    return m_classType == b.m_classType &&
           m_user == b.m_user;
}

inline void AuthAuthorization::setClassType(AuthAuthorization::AuthAuthorizationClassType classType) {
    m_classType = classType;
}

inline AuthAuthorization::AuthAuthorizationClassType AuthAuthorization::classType() const {
    return m_classType;
}

inline bool AuthAuthorization::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAuthAuthorization: {
        m_user.fetch(in);
        m_classType = static_cast<AuthAuthorizationClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool AuthAuthorization::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthAuthorization: {
        m_user.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> AuthAuthorization::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeAuthAuthorization: {
        result["classType"] = "AuthAuthorization::typeAuthAuthorization";
        result["user"] = m_user.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline AuthAuthorization AuthAuthorization::fromMap(const QMap<QString, QVariant> &map) {
    AuthAuthorization result;
    if(map.value("classType").toString() == "AuthAuthorization::typeAuthAuthorization") {
        result.setClassType(typeAuthAuthorization);
        result.setUser( User::fromMap(map.value("user").toMap()) );
        return result;
    }
    return result;
}

inline QByteArray AuthAuthorization::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const AuthAuthorization &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case AuthAuthorization::typeAuthAuthorization:
        stream << item.user();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, AuthAuthorization &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<AuthAuthorization::AuthAuthorizationClassType>(type));
    switch(type) {
    case AuthAuthorization::typeAuthAuthorization: {
        User m_user;
        stream >> m_user;
        item.setUser(m_user);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_AUTHAUTHORIZATION
