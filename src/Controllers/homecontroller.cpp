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


    t = RequestMapper::templateLoader->getTemplate("home/home-layout");
    Template headerSlider = RequestMapper::templateLoader->getTemplate("home/header-slider");
    setCommonTemplate();
    t.setVariable("header-slider", headerSlider);
    setViewBagData( "Home");
    controller->getHttpResponse()->write(t.toUtf8(),true);
}

void HomeController::about()
{

    t = RequestMapper::templateLoader->getTemplate("home/layout");
    Template mainContent = RequestMapper::templateLoader->getTemplate("home/about-main-cont");
    setCommonTemplate();
    t.setVariable("main-content", mainContent);
    setViewBagData( "About");
    controller->getHttpResponse()->write(t.toUtf8(),true);

}

void HomeController::contact()
{

    t = RequestMapper::templateLoader->getTemplate("home/layout");
    Template mainContent = RequestMapper::templateLoader->getTemplate("home/contact-main-cont");
    setCommonTemplate();
    t.setVariable("main-content", mainContent);
    setViewBagData( "Contact");
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

void HomeController::setViewBagData(const QString & pageName)
{
    HttpSession session= controller->getSession();
    QString username=session.get("username").toString();

    QJsonObject user;
    user["userName"] = username;
    user["userId"] = 1;

    QJsonObject page;
    page["pageName"] = pageName;

    QJsonObject viewBag;
    viewBag.insert("user", user);
    viewBag.insert("page", page);

    QJsonDocument doc(viewBag);
    t.setVariable("viewBagData", doc.toJson(QJsonDocument::Compact));

}
