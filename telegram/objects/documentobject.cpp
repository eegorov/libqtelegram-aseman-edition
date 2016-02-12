// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "documentobject.h"

DocumentObject::DocumentObject(const Document &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumb(0),
    m_core(core)
{
    m_thumb = new PhotoSizeObject(m_core.thumb(), this);
    connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &DocumentObject::coreThumbChanged);
}

DocumentObject::DocumentObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_thumb(0),
    m_core()
{
    m_thumb = new PhotoSizeObject(m_core.thumb(), this);
    connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &DocumentObject::coreThumbChanged);
}

DocumentObject::~DocumentObject() {
}

void DocumentObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 DocumentObject::accessHash() const {
    return m_core.accessHash();
}

void DocumentObject::setAttributes(const QList<DocumentAttribute> &attributes) {
    if(m_core.attributes() == attributes) return;
    m_core.setAttributes(attributes);
    Q_EMIT attributesChanged();
    Q_EMIT coreChanged();
}

QList<DocumentAttribute> DocumentObject::attributes() const {
    return m_core.attributes();
}

void DocumentObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 DocumentObject::date() const {
    return m_core.date();
}

void DocumentObject::setDcId(qint32 dcId) {
    if(m_core.dcId() == dcId) return;
    m_core.setDcId(dcId);
    Q_EMIT dcIdChanged();
    Q_EMIT coreChanged();
}

qint32 DocumentObject::dcId() const {
    return m_core.dcId();
}

void DocumentObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 DocumentObject::id() const {
    return m_core.id();
}

void DocumentObject::setMimeType(const QString &mimeType) {
    if(m_core.mimeType() == mimeType) return;
    m_core.setMimeType(mimeType);
    Q_EMIT mimeTypeChanged();
    Q_EMIT coreChanged();
}

QString DocumentObject::mimeType() const {
    return m_core.mimeType();
}

void DocumentObject::setSize(qint32 size) {
    if(m_core.size() == size) return;
    m_core.setSize(size);
    Q_EMIT sizeChanged();
    Q_EMIT coreChanged();
}

qint32 DocumentObject::size() const {
    return m_core.size();
}

void DocumentObject::setThumb(PhotoSizeObject* thumb) {
    if(m_thumb == thumb) return;
    if(m_thumb) delete m_thumb;
    m_thumb = thumb;
    if(m_thumb) {
        m_thumb->setParent(this);
        m_core.setThumb(m_thumb->core());
        connect(m_thumb.data(), &PhotoSizeObject::coreChanged, this, &DocumentObject::coreThumbChanged);
    }
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}

PhotoSizeObject*  DocumentObject::thumb() const {
    return m_thumb;
}

DocumentObject &DocumentObject::operator =(const Document &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_thumb->setCore(b.thumb());

    Q_EMIT accessHashChanged();
    Q_EMIT attributesChanged();
    Q_EMIT dateChanged();
    Q_EMIT dcIdChanged();
    Q_EMIT idChanged();
    Q_EMIT mimeTypeChanged();
    Q_EMIT sizeChanged();
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool DocumentObject::operator ==(const Document &b) const {
    return m_core == b;
}

void DocumentObject::setClassType(quint32 classType) {
    Document::DocumentType result;
    switch(classType) {
    case TypeDocumentEmpty:
        result = Document::typeDocumentEmpty;
        break;
    case TypeDocument:
        result = Document::typeDocument;
        break;
    default:
        result = Document::typeDocumentEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 DocumentObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Document::typeDocumentEmpty:
        result = TypeDocumentEmpty;
        break;
    case Document::typeDocument:
        result = TypeDocument;
        break;
    default:
        result = TypeDocumentEmpty;
        break;
    }

    return result;
}

void DocumentObject::setCore(const Document &core) {
    operator =(core);
}

Document DocumentObject::core() const {
    return m_core;
}

void DocumentObject::coreThumbChanged() {
    if(m_core.thumb() == m_thumb->core()) return;
    m_core.setThumb(m_thumb->core());
    Q_EMIT thumbChanged();
    Q_EMIT coreChanged();
}

