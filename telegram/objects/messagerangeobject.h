// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGERANGE_OBJECT
#define LQTG_TYPE_MESSAGERANGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagerange.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessageRangeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageRangeClassType)
    Q_PROPERTY(qint32 maxId READ maxId WRITE setMaxId NOTIFY maxIdChanged)
    Q_PROPERTY(qint32 minId READ minId WRITE setMinId NOTIFY minIdChanged)
    Q_PROPERTY(MessageRange core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageRangeClassType {
        TypeMessageRange
    };

    MessageRangeObject(const MessageRange &core, QObject *parent = 0);
    MessageRangeObject(QObject *parent = 0);
    virtual ~MessageRangeObject();

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMinId(qint32 minId);
    qint32 minId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageRange &core);
    MessageRange core() const;

    MessageRangeObject &operator =(const MessageRange &b);
    bool operator ==(const MessageRange &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void maxIdChanged();
    void minIdChanged();

private Q_SLOTS:

private:
    MessageRange m_core;
};

inline MessageRangeObject::MessageRangeObject(const MessageRange &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline MessageRangeObject::MessageRangeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline MessageRangeObject::~MessageRangeObject() {
}

inline void MessageRangeObject::setMaxId(qint32 maxId) {
    if(m_core.maxId() == maxId) return;
    m_core.setMaxId(maxId);
    Q_EMIT maxIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageRangeObject::maxId() const {
    return m_core.maxId();
}

inline void MessageRangeObject::setMinId(qint32 minId) {
    if(m_core.minId() == minId) return;
    m_core.setMinId(minId);
    Q_EMIT minIdChanged();
    Q_EMIT coreChanged();
}

inline qint32 MessageRangeObject::minId() const {
    return m_core.minId();
}

inline MessageRangeObject &MessageRangeObject::operator =(const MessageRange &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT maxIdChanged();
    Q_EMIT minIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool MessageRangeObject::operator ==(const MessageRange &b) const {
    return m_core == b;
}

inline void MessageRangeObject::setClassType(quint32 classType) {
    MessageRange::MessageRangeClassType result;
    switch(classType) {
    case TypeMessageRange:
        result = MessageRange::typeMessageRange;
        break;
    default:
        result = MessageRange::typeMessageRange;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 MessageRangeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageRange::typeMessageRange:
        result = TypeMessageRange;
        break;
    default:
        result = TypeMessageRange;
        break;
    }

    return result;
}

inline void MessageRangeObject::setCore(const MessageRange &core) {
    operator =(core);
}

inline MessageRange MessageRangeObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_MESSAGERANGE_OBJECT
