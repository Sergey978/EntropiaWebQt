#ifndef HELLOWORLDCONTROLLER_H
#define HELLOWORLDCONTROLLER_H
#include "../FrameWork/controller.h"

class HelloWorldController {
public:
    HelloWorldController(Controller * contr);
    void ser();
private:
     Controller *contr;
};

#endif // HELLOWORLDCONTROLLER_H
