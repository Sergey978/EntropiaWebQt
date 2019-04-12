#ifndef ERROR404CONTROLLER_H
#define ERROR404CONTROLLER_H
#include "../FrameWork/controller.h"

class ErrorController
{    
public:
    ErrorController(Controller * contr);
    void error404();
private:
    Controller * contr;
};

#endif // ERROR404CONTROLLER_H
