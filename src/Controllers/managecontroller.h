#ifndef MANAGECONTROLLER_H
#define MANAGECONTROLLER_H

#include <QObject>

#include "../FrameWork/controller.h"

class ManageController : public QObject
{
    Q_OBJECT
public:
    explicit ManageController(Controller * contr);

signals:

public slots:
    void index();


private:
    Controller *controller;
   // Template t;
};

#endif // MANAGECONTROLLER_H
