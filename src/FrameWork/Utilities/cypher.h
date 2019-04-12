#ifndef CYPHER_H
#define CYPHER_H

#include <iostream>
#include <QString>

class Cypher
{
public:
    Cypher();    
    static std::string getHashStringFromQba (const QByteArray & str, const QByteArray & salt);

};

#endif // CYPHER_H
