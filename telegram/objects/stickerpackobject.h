// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_STICKERPACK_OBJECT
#define LQTG_TYPE_STICKERPACK_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/stickerpack.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT StickerPackObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(StickerPackClassType)
    Q_PROPERTY(QList<qint64> documents READ documents WRITE setDocuments NOTIFY documentsChanged)
    Q_PROPERTY(QString emoticon READ emoticon WRITE setEmoticon NOTIFY emoticonChanged)
    Q_PROPERTY(StickerPack core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum StickerPackClassType {
        TypeStickerPack
    };

    StickerPackObject(const StickerPack &core, QObject *parent = 0);
    StickerPackObject(QObject *parent = 0);
    virtual ~StickerPackObject();

    void setDocuments(const QList<qint64> &documents);
    QList<qint64> documents() const;

    void setEmoticon(const QString &emoticon);
    QString emoticon() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const StickerPack &core);
    StickerPack core() const;

    StickerPackObject &operator =(const StickerPack &b);
    bool operator ==(const StickerPack &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void documentsChanged();
    void emoticonChanged();

private Q_SLOTS:

private:
    StickerPack m_core;
};

inline StickerPackObject::StickerPackObject(const StickerPack &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline StickerPackObject::StickerPackObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline StickerPackObject::~StickerPackObject() {
}

inline void StickerPackObject::setDocuments(const QList<qint64> &documents) {
    if(m_core.documents() == documents) return;
    m_core.setDocuments(documents);
    Q_EMIT documentsChanged();
    Q_EMIT coreChanged();
}

inline QList<qint64> StickerPackObject::documents() const {
    return m_core.documents();
}

inline void StickerPackObject::setEmoticon(const QString &emoticon) {
    if(m_core.emoticon() == emoticon) return;
    m_core.setEmoticon(emoticon);
    Q_EMIT emoticonChanged();
    Q_EMIT coreChanged();
}

inline QString StickerPackObject::emoticon() const {
    return m_core.emoticon();
}

inline StickerPackObject &StickerPackObject::operator =(const StickerPack &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT documentsChanged();
    Q_EMIT emoticonChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool StickerPackObject::operator ==(const StickerPack &b) const {
    return m_core == b;
}

inline void StickerPackObject::setClassType(quint32 classType) {
    StickerPack::StickerPackClassType result;
    switch(classType) {
    case TypeStickerPack:
        result = StickerPack::typeStickerPack;
        break;
    default:
        result = StickerPack::typeStickerPack;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 StickerPackObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case StickerPack::typeStickerPack:
        result = TypeStickerPack;
        break;
    default:
        result = TypeStickerPack;
        break;
    }

    return result;
}

inline void StickerPackObject::setCore(const StickerPack &core) {
    operator =(core);
}

inline StickerPack StickerPackObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_STICKERPACK_OBJECT
