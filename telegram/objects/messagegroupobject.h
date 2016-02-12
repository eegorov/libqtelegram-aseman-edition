// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEGROUP_OBJECT
#define LQTG_TYPE_MESSAGEGROUP_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagegroup.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessageGroupObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageGroupType)
    Q_PROPERTY(qint32 count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 maxId READ maxId WRITE setMaxId NOTIFY maxIdChanged)
    Q_PROPERTY(qint32 minId READ minId WRITE setMinId NOTIFY minIdChanged)
    Q_PROPERTY(MessageGroup core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageGroupType {
        TypeMessageGroup
    };

    MessageGroupObject(const MessageGroup &core, QObject *parent = 0);
    MessageGroupObject(QObject *parent = 0);
    virtual ~MessageGroupObject();

    void setCount(qint32 count);
    qint32 count() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMinId(qint32 minId);
    qint32 minId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageGroup &core);
    MessageGroup core() const;

    MessageGroupObject &operator =(const MessageGroup &b);
    bool operator ==(const MessageGroup &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void countChanged();
    void dateChanged();
    void maxIdChanged();
    void minIdChanged();

private Q_SLOTS:

private:
    MessageGroup m_core;
};

#endif // LQTG_TYPE_MESSAGEGROUP_OBJECT
