#ifndef ACCOUNTCONTOLLER_H
#define ACCOUNTCONTOLLER_H

#include <template.h>
#include"../FrameWork/controller.h"

class AccountContoller
{
public:
    AccountContoller(Controller * contr);
    void signup();
    void signin();
    void index();
    void isUserNameExist();
    void isUserEmailExist();


private:
    Controller *controller;
    Template t;    
};

#endif // ACCOUNTCONTOLLER_H
