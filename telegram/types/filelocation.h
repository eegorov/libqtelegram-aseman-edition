// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_FILELOCATION
#define LQTG_TYPE_FILELOCATION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT FileLocation : public TelegramTypeObject
{
public:
    enum FileLocationClassType {
        typeFileLocationUnavailable = 0x7c596b46,
        typeFileLocation = 0x53d69076
    };

    FileLocation(FileLocationClassType classType = typeFileLocationUnavailable, InboundPkt *in = 0);
    FileLocation(InboundPkt *in);
    FileLocation(const Null&);
    virtual ~FileLocation();

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setLocalId(qint32 localId);
    qint32 localId() const;

    void setSecret(qint64 secret);
    qint64 secret() const;

    void setVolumeId(qint64 volumeId);
    qint64 volumeId() const;

    void setClassType(FileLocationClassType classType);
    FileLocationClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static FileLocation fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const FileLocation &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_dcId;
    qint32 m_localId;
    qint64 m_secret;
    qint64 m_volumeId;
    FileLocationClassType m_classType;
};

Q_DECLARE_METATYPE(FileLocation)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const FileLocation &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, FileLocation &item);

inline FileLocation::FileLocation(FileLocationClassType classType, InboundPkt *in) :
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline FileLocation::FileLocation(InboundPkt *in) :
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(typeFileLocationUnavailable)
{
    fetch(in);
}

inline FileLocation::FileLocation(const Null &null) :
    TelegramTypeObject(null),
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(typeFileLocationUnavailable)
{
}

inline FileLocation::~FileLocation() {
}

inline void FileLocation::setDcId(qint32 dcId) {
    m_dcId = dcId;
}

inline qint32 FileLocation::dcId() const {
    return m_dcId;
}

inline void FileLocation::setLocalId(qint32 localId) {
    m_localId = localId;
}

inline qint32 FileLocation::localId() const {
    return m_localId;
}

inline void FileLocation::setSecret(qint64 secret) {
    m_secret = secret;
}

inline qint64 FileLocation::secret() const {
    return m_secret;
}

inline void FileLocation::setVolumeId(qint64 volumeId) {
    m_volumeId = volumeId;
}

inline qint64 FileLocation::volumeId() const {
    return m_volumeId;
}

inline bool FileLocation::operator ==(const FileLocation &b) const {
    return m_classType == b.m_classType &&
           m_dcId == b.m_dcId &&
           m_localId == b.m_localId &&
           m_secret == b.m_secret &&
           m_volumeId == b.m_volumeId;
}

inline void FileLocation::setClassType(FileLocation::FileLocationClassType classType) {
    m_classType = classType;
}

inline FileLocation::FileLocationClassType FileLocation::classType() const {
    return m_classType;
}

inline bool FileLocation::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeFileLocationUnavailable: {
        m_volumeId = in->fetchLong();
        m_localId = in->fetchInt();
        m_secret = in->fetchLong();
        m_classType = static_cast<FileLocationClassType>(x);
        return true;
    }
        break;
    
    case typeFileLocation: {
        m_dcId = in->fetchInt();
        m_volumeId = in->fetchLong();
        m_localId = in->fetchInt();
        m_secret = in->fetchLong();
        m_classType = static_cast<FileLocationClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool FileLocation::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeFileLocationUnavailable: {
        out->appendLong(m_volumeId);
        out->appendInt(m_localId);
        out->appendLong(m_secret);
        return true;
    }
        break;
    
    case typeFileLocation: {
        out->appendInt(m_dcId);
        out->appendLong(m_volumeId);
        out->appendInt(m_localId);
        out->appendLong(m_secret);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> FileLocation::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeFileLocationUnavailable: {
        result["classType"] = "FileLocation::typeFileLocationUnavailable";
        result["volumeId"] = QVariant::fromValue<qint64>(volumeId());
        result["localId"] = QVariant::fromValue<qint32>(localId());
        result["secret"] = QVariant::fromValue<qint64>(secret());
        return result;
    }
        break;
    
    case typeFileLocation: {
        result["classType"] = "FileLocation::typeFileLocation";
        result["dcId"] = QVariant::fromValue<qint32>(dcId());
        result["volumeId"] = QVariant::fromValue<qint64>(volumeId());
        result["localId"] = QVariant::fromValue<qint32>(localId());
        result["secret"] = QVariant::fromValue<qint64>(secret());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline FileLocation FileLocation::fromMap(const QMap<QString, QVariant> &map) {
    FileLocation result;
    if(map.value("classType").toString() == "FileLocation::typeFileLocationUnavailable") {
        result.setClassType(typeFileLocationUnavailable);
        result.setVolumeId( map.value("volumeId").value<qint64>() );
        result.setLocalId( map.value("localId").value<qint32>() );
        result.setSecret( map.value("secret").value<qint64>() );
        return result;
    }
    if(map.value("classType").toString() == "FileLocation::typeFileLocation") {
        result.setClassType(typeFileLocation);
        result.setDcId( map.value("dcId").value<qint32>() );
        result.setVolumeId( map.value("volumeId").value<qint64>() );
        result.setLocalId( map.value("localId").value<qint32>() );
        result.setSecret( map.value("secret").value<qint64>() );
        return result;
    }
    return result;
}

inline QByteArray FileLocation::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const FileLocation &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case FileLocation::typeFileLocationUnavailable:
        stream << item.volumeId();
        stream << item.localId();
        stream << item.secret();
        break;
    case FileLocation::typeFileLocation:
        stream << item.dcId();
        stream << item.volumeId();
        stream << item.localId();
        stream << item.secret();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, FileLocation &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<FileLocation::FileLocationClassType>(type));
    switch(type) {
    case FileLocation::typeFileLocationUnavailable: {
        qint64 m_volume_id;
        stream >> m_volume_id;
        item.setVolumeId(m_volume_id);
        qint32 m_local_id;
        stream >> m_local_id;
        item.setLocalId(m_local_id);
        qint64 m_secret;
        stream >> m_secret;
        item.setSecret(m_secret);
    }
        break;
    case FileLocation::typeFileLocation: {
        qint32 m_dc_id;
        stream >> m_dc_id;
        item.setDcId(m_dc_id);
        qint64 m_volume_id;
        stream >> m_volume_id;
        item.setVolumeId(m_volume_id);
        qint32 m_local_id;
        stream >> m_local_id;
        item.setLocalId(m_local_id);
        qint64 m_secret;
        stream >> m_secret;
        item.setSecret(m_secret);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_FILELOCATION
