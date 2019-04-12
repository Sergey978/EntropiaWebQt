#include "helloworldcontroller.h"

HelloWorldController::HelloWorldController(Controller *contr):contr (contr)
    {
    // empty
}

void HelloWorldController::ser() {
  contr->getHttpResponse()->write("Hello World",true);
}
