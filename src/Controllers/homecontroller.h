#ifndef HOMECONTROLLER_H
#define HOMECONTROLLER_H
#include <template.h>
#include "../FrameWork/controller.h"


class HomeController: public QObject
{
    Q_OBJECT
public:
    HomeController(Controller * contr);

public slots:
    void home();
    void about();
    void contact();

private:
    Controller * controller;
    Template t;
    void setCommonTemplate();
    void setViewBagData(const QString & pageName);
};

#endif // HOMECONTROLLER_H
