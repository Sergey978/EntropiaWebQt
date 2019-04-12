#include "homecontroller.h"
#include "../requestmapper.h"

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
    t.setVariable("name",username);
    t.setCondition("logged-in",!username.isEmpty());
    controller->getHttpResponse()->write(t.toUtf8(),true);
}

void HomeController::about()
{
    HttpSession session= controller->getSession();
    QString username=session.get("username").toString();

    t = RequestMapper::templateLoader->getTemplate("home/layout");
    Template mainContent = RequestMapper::templateLoader->getTemplate("home/about-main-cont");
    setCommonTemplate();
    t.setVariable("name",username);
    t.setVariable("main-content", mainContent);
    t.setCondition("logged-in",!username.isEmpty());
    controller->getHttpResponse()->write(t.toUtf8(),true);

}

void HomeController::contact()
{

    HttpSession session=controller->getSession();
    QString username=session.get("username").toString();

    t = RequestMapper::templateLoader->getTemplate("home/layout");
    Template mainContent = RequestMapper::templateLoader->getTemplate("home/contact-main-cont");
    setCommonTemplate();
    t.setVariable("name",username);
    t.setVariable("main-content", mainContent);
    t.setCondition("logged-in",!username.isEmpty());
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
