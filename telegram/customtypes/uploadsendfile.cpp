// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "uploadsendfile.h"
#include "../coretypes.h"

UploadSendFile::UploadSendFile(UploadSendFileType classType) :
    m_partId(0),
    m_totalSize(0),
    m_uploaded(0),
    m_classType(classType)
{
}

UploadSendFile::UploadSendFile(const Null &null) :
    TelegramCustomTypeObject(null),
    m_partId(0),
    m_totalSize(0),
    m_uploaded(0),
    m_classType(typeUploadSendFileEmpty)
{
}

UploadSendFile::~UploadSendFile() {
}

void UploadSendFile::setPartId(qint32 partId) {
    m_partId = partId;
}

qint32 UploadSendFile::partId() const {
    return m_partId;
}

void UploadSendFile::setTotalSize(qint32 totalSize) {
    m_totalSize = totalSize;
}

qint32 UploadSendFile::totalSize() const {
    return m_totalSize;
}

void UploadSendFile::setUploaded(qint32 uploaded) {
    m_uploaded = uploaded;
}

qint32 UploadSendFile::uploaded() const {
    return m_uploaded;
}

bool UploadSendFile::operator ==(const UploadSendFile &b) const {
    return m_classType == b.m_classType &&
           m_partId == b.m_partId &&
           m_totalSize == b.m_totalSize &&
           m_uploaded == b.m_uploaded;
}

void UploadSendFile::setClassType(UploadSendFile::UploadSendFileType classType) {
    m_classType = classType;
}

UploadSendFile::UploadSendFileType UploadSendFile::classType() const {
    return m_classType;
}

