#include "homecontroller.h"
#include "../requestmapper.h"
#include <QJsonObject>
#include<QJsonDocument>

HomeController::HomeController(Controller * contr ):controller(contr),
    t(RequestMapper::templateLoader->getTemplate("home/layout"))
{

}

void HomeController::home()
{

    HttpSession session= controller->getSession();
    QString username=session.get("username").toString();

    t = RequestMapper::templateLoader->getTemplate("home/home-layout");
    Template headerSlider = RequestMapper::templateLoader->getTemplate("home/header-slider");
    setCommonTemplate();
    t.setVariable("header-slider", headerSlider);

    QJsonObject user;
    user["userName"] = "username";
    user["userId"] = 1;

    QJsonObject page;
    page["pageName"] = "Home";

    QJsonObject viewBag;
    viewBag.insert("user", user);
    viewBag.insert("page", page);

    QJsonDocument doc(viewBag);

    t.setVariable("viewBagData", doc.toJson(QJsonDocument::Compact));

    controller->getHttpResponse()->write(t.toUtf8(),true);
}

void HomeController::about()
{
    HttpSession session= controller->getSession();
    QString username=session.get("username").toString();

    t = RequestMapper::templateLoader->getTemplate("home/layout");
    Template mainContent = RequestMapper::templateLoader->getTemplate("home/about-main-cont");
    setCommonTemplate();   
    t.setVariable("main-content", mainContent);

    controller->getHttpResponse()->write(t.toUtf8(),true);

}

void HomeController::contact()
{

    HttpSession session=controller->getSession();
    QString username=session.get("username").toString();

    t = RequestMapper::templateLoader->getTemplate("home/layout");
    Template mainContent = RequestMapper::templateLoader->getTemplate("home/contact-main-cont");
    setCommonTemplate();    
    t.setVariable("main-content", mainContent);  
    controller->getHttpResponse()->write(t.toUtf8(),true);
}


void HomeController::setCommonTemplate()
{
    Template footer = RequestMapper::templateLoader->getTemplate("default-share/footer");
    Template head = RequestMapper::templateLoader->getTemplate("default-share/head");
    Template navbar = RequestMapper::templateLoader->getTemplate("default-share/navbar");

    t.setVariable("footer", footer);
    t.setVariable("head", head);
    t.setVariable("navbar", navbar);

}
