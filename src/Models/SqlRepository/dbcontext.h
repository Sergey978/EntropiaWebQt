#ifndef DBMYSQLCONTEXT_H
#define DBMYSQLCONTEXT_H
#include"dbconfig.h"

//***************************************************
//* Use for MySql/ MariaDb database uncomment if use
//*****************************************************

//#include <sqlpp11/mysql/mysql.h>
//namespace mysql = sqlpp::mysql;
//class DbContext:public mysql::connection
//{
//public:
//    static DbContext& Instance()
//    {
//        static DbContext s;
//        return s;
//    }
//private:
//    DbContext():
//        mysql::connection (std::shared_ptr<mysql::connection_config>{&DbConfig::conf}){}
//    ~DbContext(){}
//    DbContext(DbContext const&) = delete;
//    DbContext& operator= (DbContext const&) = delete;
//};

//***************************************************************
//* Use for sqlite db uncomment if it use
//*************************************************

#include <sqlpp11/sqlite3/connection.h>
namespace sql = sqlpp::sqlite3;
class DbContext: public sql::connection
{
public:
    static DbContext& Instance()
    {
        static DbContext s;
        return s;
    }
private:
    DbContext(): sql::connection(DbConfig::conf){}
    ~DbContext(){}
    DbContext(DbContext const&) = delete;
    DbContext& operator=(DbContext const&) = delete;
};

#endif // DBMYSQLCONTEXT_H
