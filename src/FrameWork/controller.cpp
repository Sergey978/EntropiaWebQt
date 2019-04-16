#include "controller.h"
#include "../requestmapper.h"

Controller::Controller(QObject* parent):QObject(parent)
{

}


 HttpRequest * Controller::getHttpRequest()
 {
     return req;
 }

 HttpResponse * Controller::getHttpResponse()
 {
     return res;
 }

 HttpSession Controller::getSession()
 {
    return RequestMapper::sessionStore->getSession(*req,*res,false);
 }

 void Controller::setHttpRequest( HttpRequest &req)
 {
     this->req = &req;
 }

 void Controller::setHttpResponse(HttpResponse &resp)
 {
     this->res = &resp;
 }

 void Controller::setReqResp(HttpRequest &req, HttpResponse &resp)
 {
      this->req = &req;
      this->res = &resp;
 }
 

 
