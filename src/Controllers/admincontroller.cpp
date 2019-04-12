#include "admincontroller.h"
#include <QTime>
#include "../Models/SqlRepository/dbcontext.h"
#include"../Models/SqlRepository/EntropiaMySQl.h"
#include <sqlpp11/sqlpp11.h>

AdminController::AdminController( Controller * contr ):controller(contr)
{

}

void AdminController::user(int id)
{
    QByteArray resp = "its user controller ";
    QString ids = QString::number(id);
    QString now=QTime::currentTime().toString("HH:mm:ss");

    controller->getHttpResponse()->write(resp );
    controller->getHttpResponse()->write(  now.toLatin1() );
    controller->getHttpResponse()->write(  ids.toLatin1() );

    // test working with sqlite database

    DbContext &db = DbContext::Instance();
    QByteArray  resp2 = " ";
    dBRepo::Roles roles;


    auto s = db(select(roles.Id, roles.Name).from(roles).unconditionally());
    for (const auto& row :  s )
    {
        int id =  row.Id     ;
        QString name =    QString::fromStdString(row.Name) ;


        resp2.append(name.toLatin1());
        resp2.append("\n");


    }
    controller->getHttpResponse()->write( resp2);
}
