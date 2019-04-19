#ifndef DBCONFIG_H
#define DBCONFIG_H

#include <QDebug>

//*******************************************************
//* Config for MySql/MariaDb database uncomment if it use
//*******************************************************

//#include <sqlpp11/mysql/mysql.h>
//namespace mysql = sqlpp::mysql;
//class DbConfig
//{
//public:
//    static mysql::connection_config conf;
//    static void   setConfig(std::string user,std::string password
//                            , std::string database, bool debug = false)
//    {
//        conf.user = user;
//        conf.password = password;
//        conf.database = database;
//        conf.debug = debug;
//    }
//};


//*****************************************************
//* Config for sqlite database uncomment if it use
//*****************************************************

#include <sqlpp11/sqlite3/connection.h>
namespace sql = sqlpp::sqlite3;
class DbConfig : public sql::connection_config
{
public:
    static sql::connection_config conf;
    DbConfig();
    static void   setConfig(std::string path,int option =6, bool debug = false){
        conf.path_to_database = path;
        conf.flags = option;
        conf.debug = debug;      

        qDebug("SQlite: path=%s",path.data());
    }
};

#endif // DBCONFIG_H
