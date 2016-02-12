// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESAFFECTEDHISTORY_OBJECT
#define LQTG_TYPE_MESSAGESAFFECTEDHISTORY_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesaffectedhistory.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesAffectedHistoryObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesAffectedHistoryType)
    Q_PROPERTY(qint32 offset READ offset WRITE setOffset NOTIFY offsetChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 ptsCount READ ptsCount WRITE setPtsCount NOTIFY ptsCountChanged)
    Q_PROPERTY(MessagesAffectedHistory core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesAffectedHistoryType {
        TypeMessagesAffectedHistory
    };

    MessagesAffectedHistoryObject(const MessagesAffectedHistory &core, QObject *parent = 0);
    MessagesAffectedHistoryObject(QObject *parent = 0);
    virtual ~MessagesAffectedHistoryObject();

    void setOffset(qint32 offset);
    qint32 offset() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesAffectedHistory &core);
    MessagesAffectedHistory core() const;

    MessagesAffectedHistoryObject &operator =(const MessagesAffectedHistory &b);
    bool operator ==(const MessagesAffectedHistory &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void offsetChanged();
    void ptsChanged();
    void ptsCountChanged();

private Q_SLOTS:

private:
    MessagesAffectedHistory m_core;
};

#endif // LQTG_TYPE_MESSAGESAFFECTEDHISTORY_OBJECT
