// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPEERNOTIFYSETTINGS
#define LQTG_TYPE_INPUTPEERNOTIFYSETTINGS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT InputPeerNotifySettings : public TelegramTypeObject
{
public:
    enum InputPeerNotifySettingsClassType {
        typeInputPeerNotifySettings = 0x38935eb2
    };

    InputPeerNotifySettings(InputPeerNotifySettingsClassType classType = typeInputPeerNotifySettings, InboundPkt *in = 0);
    InputPeerNotifySettings(InboundPkt *in);
    InputPeerNotifySettings(const Null&);
    virtual ~InputPeerNotifySettings();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMuteUntil(qint32 muteUntil);
    qint32 muteUntil() const;

    void setShowPreviews(bool showPreviews);
    bool showPreviews() const;

    void setSilent(bool silent);
    bool silent() const;

    void setSound(const QString &sound);
    QString sound() const;

    void setClassType(InputPeerNotifySettingsClassType classType);
    InputPeerNotifySettingsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputPeerNotifySettings fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const InputPeerNotifySettings &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_flags;
    qint32 m_muteUntil;
    QString m_sound;
    InputPeerNotifySettingsClassType m_classType;
};

Q_DECLARE_METATYPE(InputPeerNotifySettings)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputPeerNotifySettings &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputPeerNotifySettings &item);

inline InputPeerNotifySettings::InputPeerNotifySettings(InputPeerNotifySettingsClassType classType, InboundPkt *in) :
    m_flags(0),
    m_muteUntil(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline InputPeerNotifySettings::InputPeerNotifySettings(InboundPkt *in) :
    m_flags(0),
    m_muteUntil(0),
    m_classType(typeInputPeerNotifySettings)
{
    fetch(in);
}

inline InputPeerNotifySettings::InputPeerNotifySettings(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_muteUntil(0),
    m_classType(typeInputPeerNotifySettings)
{
}

inline InputPeerNotifySettings::~InputPeerNotifySettings() {
}

inline void InputPeerNotifySettings::setFlags(qint32 flags) {
    m_flags = flags;
}

inline qint32 InputPeerNotifySettings::flags() const {
    return m_flags;
}

inline void InputPeerNotifySettings::setMuteUntil(qint32 muteUntil) {
    m_muteUntil = muteUntil;
}

inline qint32 InputPeerNotifySettings::muteUntil() const {
    return m_muteUntil;
}

inline void InputPeerNotifySettings::setShowPreviews(bool showPreviews) {
    if(showPreviews) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

inline bool InputPeerNotifySettings::showPreviews() const {
    return (m_flags & 1<<0);
}

inline void InputPeerNotifySettings::setSilent(bool silent) {
    if(silent) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

inline bool InputPeerNotifySettings::silent() const {
    return (m_flags & 1<<1);
}

inline void InputPeerNotifySettings::setSound(const QString &sound) {
    m_sound = sound;
}

inline QString InputPeerNotifySettings::sound() const {
    return m_sound;
}

inline bool InputPeerNotifySettings::operator ==(const InputPeerNotifySettings &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags &&
           m_muteUntil == b.m_muteUntil &&
           m_sound == b.m_sound;
}

inline void InputPeerNotifySettings::setClassType(InputPeerNotifySettings::InputPeerNotifySettingsClassType classType) {
    m_classType = classType;
}

inline InputPeerNotifySettings::InputPeerNotifySettingsClassType InputPeerNotifySettings::classType() const {
    return m_classType;
}

inline bool InputPeerNotifySettings::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPeerNotifySettings: {
        m_flags = in->fetchInt();
        m_muteUntil = in->fetchInt();
        m_sound = in->fetchQString();
        m_classType = static_cast<InputPeerNotifySettingsClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool InputPeerNotifySettings::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPeerNotifySettings: {
        out->appendInt(m_flags);
        out->appendInt(m_muteUntil);
        out->appendQString(m_sound);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> InputPeerNotifySettings::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputPeerNotifySettings: {
        result["classType"] = "InputPeerNotifySettings::typeInputPeerNotifySettings";
        result["showPreviews"] = QVariant::fromValue<bool>(showPreviews());
        result["silent"] = QVariant::fromValue<bool>(silent());
        result["muteUntil"] = QVariant::fromValue<qint32>(muteUntil());
        result["sound"] = QVariant::fromValue<QString>(sound());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline InputPeerNotifySettings InputPeerNotifySettings::fromMap(const QMap<QString, QVariant> &map) {
    InputPeerNotifySettings result;
    if(map.value("classType").toString() == "InputPeerNotifySettings::typeInputPeerNotifySettings") {
        result.setClassType(typeInputPeerNotifySettings);
        result.setShowPreviews( map.value("showPreviews").value<bool>() );
        result.setSilent( map.value("silent").value<bool>() );
        result.setMuteUntil( map.value("muteUntil").value<qint32>() );
        result.setSound( map.value("sound").value<QString>() );
        return result;
    }
    return result;
}

inline QByteArray InputPeerNotifySettings::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const InputPeerNotifySettings &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputPeerNotifySettings::typeInputPeerNotifySettings:
        stream << item.flags();
        stream << item.muteUntil();
        stream << item.sound();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, InputPeerNotifySettings &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputPeerNotifySettings::InputPeerNotifySettingsClassType>(type));
    switch(type) {
    case InputPeerNotifySettings::typeInputPeerNotifySettings: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_mute_until;
        stream >> m_mute_until;
        item.setMuteUntil(m_mute_until);
        QString m_sound;
        stream >> m_sound;
        item.setSound(m_sound);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_INPUTPEERNOTIFYSETTINGS
