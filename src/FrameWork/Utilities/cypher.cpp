#include "cypher.h"
#include <QCryptographicHash>

Cypher::Cypher()
{


}

std::string Cypher::getHashStringFromQba(const QByteArray &str, const QByteArray &salt)
{
    QByteArray tempStr;
    tempStr.append(str).append(salt);
    return QCryptographicHash::hash(tempStr,QCryptographicHash::Sha1).toHex().toStdString();

}
