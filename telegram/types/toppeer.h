// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_TOPPEER
#define LQTG_TYPE_TOPPEER

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include "peer.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT TopPeer : public TelegramTypeObject
{
public:
    enum TopPeerClassType {
        typeTopPeer = 0xedcdc05b
    };

    TopPeer(TopPeerClassType classType = typeTopPeer, InboundPkt *in = 0);
    TopPeer(InboundPkt *in);
    TopPeer(const Null&);
    virtual ~TopPeer();

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setRating(qreal rating);
    qreal rating() const;

    void setClassType(TopPeerClassType classType);
    TopPeerClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static TopPeer fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const TopPeer &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    Peer m_peer;
    qreal m_rating;
    TopPeerClassType m_classType;
};

Q_DECLARE_METATYPE(TopPeer)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const TopPeer &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, TopPeer &item);

inline TopPeer::TopPeer(TopPeerClassType classType, InboundPkt *in) :
    m_rating(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline TopPeer::TopPeer(InboundPkt *in) :
    m_rating(0),
    m_classType(typeTopPeer)
{
    fetch(in);
}

inline TopPeer::TopPeer(const Null &null) :
    TelegramTypeObject(null),
    m_rating(0),
    m_classType(typeTopPeer)
{
}

inline TopPeer::~TopPeer() {
}

inline void TopPeer::setPeer(const Peer &peer) {
    m_peer = peer;
}

inline Peer TopPeer::peer() const {
    return m_peer;
}

inline void TopPeer::setRating(qreal rating) {
    m_rating = rating;
}

inline qreal TopPeer::rating() const {
    return m_rating;
}

inline bool TopPeer::operator ==(const TopPeer &b) const {
    return m_classType == b.m_classType &&
           m_peer == b.m_peer &&
           m_rating == b.m_rating;
}

inline void TopPeer::setClassType(TopPeer::TopPeerClassType classType) {
    m_classType = classType;
}

inline TopPeer::TopPeerClassType TopPeer::classType() const {
    return m_classType;
}

inline bool TopPeer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeTopPeer: {
        m_peer.fetch(in);
        m_rating = in->fetchDouble();
        m_classType = static_cast<TopPeerClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool TopPeer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeTopPeer: {
        m_peer.push(out);
        out->appendDouble(m_rating);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> TopPeer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeTopPeer: {
        result["classType"] = "TopPeer::typeTopPeer";
        result["peer"] = m_peer.toMap();
        result["rating"] = QVariant::fromValue<qreal>(rating());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline TopPeer TopPeer::fromMap(const QMap<QString, QVariant> &map) {
    TopPeer result;
    if(map.value("classType").toString() == "TopPeer::typeTopPeer") {
        result.setClassType(typeTopPeer);
        result.setPeer( Peer::fromMap(map.value("peer").toMap()) );
        result.setRating( map.value("rating").value<qreal>() );
        return result;
    }
    return result;
}

inline QByteArray TopPeer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const TopPeer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case TopPeer::typeTopPeer:
        stream << item.peer();
        stream << item.rating();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, TopPeer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<TopPeer::TopPeerClassType>(type));
    switch(type) {
    case TopPeer::typeTopPeer: {
        Peer m_peer;
        stream >> m_peer;
        item.setPeer(m_peer);
        qreal m_rating;
        stream >> m_rating;
        item.setRating(m_rating);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_TOPPEER
