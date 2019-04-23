#include "managecontroller.h"

ManageController::ManageController(Controller *contr) : controller(contr)
{

}

void ManageController::index()
{
     HttpSession session=controller->getSession();
     QString username=session.get("username").toString();

            if (!username.isEmpty())
            {
                 controller->getHttpResponse()->write("Hello User ",true);
                 controller->getHttpResponse()->write(username.toLatin1(),true);
            }
            else {
                 controller->getHttpResponse()->redirect("/account");

            }

}
