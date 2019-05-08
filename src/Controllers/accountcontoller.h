#ifndef ACCOUNTCONTOLLER_H
#define ACCOUNTCONTOLLER_H

#include <template.h>
#include"../FrameWork/controller.h"

class AccountContoller: public QObject
{
    Q_OBJECT
public:
    AccountContoller(Controller * contr);

public slots:
    void signup();
    void signin();
    void index();
    void isUserNameExist();
    void isUserEmailExist();

private:
    Controller *controller;
    void setCommonTemplate();
   Template t;
};

#endif // ACCOUNTCONTOLLER_H
