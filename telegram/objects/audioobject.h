// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUDIO_OBJECT
#define LQTG_TYPE_AUDIO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/audio.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AudioObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AudioType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 dcId READ dcId WRITE setDcId NOTIFY dcIdChanged)
    Q_PROPERTY(qint32 duration READ duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString mimeType READ mimeType WRITE setMimeType NOTIFY mimeTypeChanged)
    Q_PROPERTY(qint32 size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(Audio core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AudioType {
        TypeAudioEmpty,
        TypeAudio
    };

    AudioObject(const Audio &core, QObject *parent = 0);
    AudioObject(QObject *parent = 0);
    virtual ~AudioObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setId(qint64 id);
    qint64 id() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Audio &core);
    Audio core() const;

    AudioObject &operator =(const Audio &b);
    bool operator ==(const Audio &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void dateChanged();
    void dcIdChanged();
    void durationChanged();
    void idChanged();
    void mimeTypeChanged();
    void sizeChanged();

private Q_SLOTS:

private:
    Audio m_core;
};

#endif // LQTG_TYPE_AUDIO_OBJECT
