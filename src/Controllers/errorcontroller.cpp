#include "errorcontroller.h"

ErrorController::ErrorController(Controller * contr)
    : contr (contr)
{

}

void ErrorController::error404()
{
    contr->getHttpResponse()->setStatus(404,"Not found");
    contr->getHttpResponse()->write("The URL is wrong, no such document.");

}
