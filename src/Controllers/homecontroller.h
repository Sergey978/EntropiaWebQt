#ifndef HOMECONTROLLER_H
#define HOMECONTROLLER_H
#include <template.h>
#include "../FrameWork/controller.h"


class HomeController
{
public:
    HomeController(Controller * contr);
    void home();
    void about();
    void contact();

private:
    Controller * controller;
    Template t;
    void setCommonTemplate();
};

#endif // HOMECONTROLLER_H
