// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_FILELOCATION_OBJECT
#define LQTG_TYPE_FILELOCATION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/filelocation.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT FileLocationObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(FileLocationType)
    Q_PROPERTY(qint32 dcId READ dcId WRITE setDcId NOTIFY dcIdChanged)
    Q_PROPERTY(qint32 localId READ localId WRITE setLocalId NOTIFY localIdChanged)
    Q_PROPERTY(qint64 secret READ secret WRITE setSecret NOTIFY secretChanged)
    Q_PROPERTY(qint64 volumeId READ volumeId WRITE setVolumeId NOTIFY volumeIdChanged)
    Q_PROPERTY(FileLocation core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum FileLocationType {
        TypeFileLocationUnavailable,
        TypeFileLocation
    };

    FileLocationObject(const FileLocation &core, QObject *parent = 0);
    FileLocationObject(QObject *parent = 0);
    virtual ~FileLocationObject();

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setLocalId(qint32 localId);
    qint32 localId() const;

    void setSecret(qint64 secret);
    qint64 secret() const;

    void setVolumeId(qint64 volumeId);
    qint64 volumeId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const FileLocation &core);
    FileLocation core() const;

    FileLocationObject &operator =(const FileLocation &b);
    bool operator ==(const FileLocation &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void dcIdChanged();
    void localIdChanged();
    void secretChanged();
    void volumeIdChanged();

private Q_SLOTS:

private:
    FileLocation m_core;
};

#endif // LQTG_TYPE_FILELOCATION_OBJECT
