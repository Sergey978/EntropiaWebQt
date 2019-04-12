#ifndef ADMINCONTROLLER_H
#define ADMINCONTROLLER_H

#include"../FrameWork/controller.h"

class AdminController
{

public:
    AdminController(Controller * contr);
    void user(int id);

private:
    Controller *controller;

};

#endif // ADMINCONTROLLER_H
