#include <QCoreApplication>
#include <QSettings>
#include <QFile>
#include <QDir>
#include <QString>
#include "requestmapper.h"
#include "filelogger.h"
#include "startup.h"
#include "Models/SqlRepository/dbconfig.h"



/**
 * Search the configuration file.
 * Aborts the application if not found.
 * @return The valid filename
 */
QString searchConfigFile() {
    QString binDir=QCoreApplication::applicationDirPath();
    QString appName=QCoreApplication::applicationName();
    QFile file;
    file.setFileName(binDir+"/webapp1.ini");
    if (!file.exists()) {
        file.setFileName(binDir+"/etc/webapp1.ini");
        if (!file.exists()) {
            file.setFileName(binDir+"/../etc/webapp1.ini");
            if (!file.exists()) {
                file.setFileName(binDir+"/../"+appName+"/etc/webapp1.ini");
                if (!file.exists()) {
                    file.setFileName(binDir+"/../../"+appName+"/etc/webapp1.ini");
                    if (!file.exists()) {
                        file.setFileName(binDir+"/../../../../../"+appName+"/etc/webapp1.ini");
                        if (!file.exists()) {
                            file.setFileName(QDir::rootPath()+"etc/webapp1.ini");
                        }
                    }
                }
            }
        }
    }
    if (file.exists()) {
        QString configFileName=QDir(file.fileName()).canonicalPath();
        qDebug("using config file %s", qPrintable(configFileName));
        return configFileName;
    }
    else {
        qFatal("config file not found");
    }
}

void Startup::start() {
    QCoreApplication* app = application();
    QString configFileName=searchConfigFile();

    // Configure logging
    QSettings* logSettings=new QSettings(configFileName,QSettings::IniFormat,app);
    logSettings->beginGroup("logging");
    RequestMapper::logger=new FileLogger(logSettings,10000,app);
    RequestMapper::logger->installMsgHandler();

    // Log the library version
    qDebug("QtWebApp has version %s",getQtWebAppLibVersion());

    // Session store
    QSettings* sessionSettings=new QSettings(configFileName,QSettings::IniFormat,app);
    sessionSettings->beginGroup("sessions");
    RequestMapper::sessionStore=new HttpSessionStore(sessionSettings,app);

    // Static file controller
    QSettings* fileSettings=new QSettings(configFileName,QSettings::IniFormat,app);
    fileSettings->beginGroup("files");
    RequestMapper::staticFileController=new StaticFileController(fileSettings,app);

    // Configure template cache
    QSettings* templateSettings=new QSettings(configFileName,QSettings::IniFormat,app);
    templateSettings->beginGroup("templates");
    RequestMapper::templateLoader=new TemplateLoader(templateSettings,app);

    // HTTP server
    QSettings* listenerSettings=new QSettings(configFileName,QSettings::IniFormat,app);
    listenerSettings->beginGroup("listener");
    listener=new HttpListener(listenerSettings,new RequestMapper(app),app);


    //SQLPP  database
    QSettings* dBSettings=new QSettings(configFileName,QSettings::IniFormat,app);
    dBSettings->beginGroup("database");

    if (dBSettings->value("vendor").toString() == "sqlite")
    {

        QString dbName = dBSettings->value("path").toString();
        // Convert relative fileName to absolute, based on the directory of the config file.
        #ifdef Q_OS_WIN32
                if (QDir::isRelativePath(dbName) && dBSettings->format()!=QSettings::NativeFormat)
        #else
                if (QDir::isRelativePath(dbName))
        #endif
                {
                    QFileInfo configFile(dBSettings->fileName());
                    dbName=QFileInfo(configFile.absolutePath(),dbName).absoluteFilePath();
                }
        DbConfig::setConfig(dbName.toStdString(), 6  ,dBSettings->value("debug").toBool());



    }
    else if (dBSettings->value("vendor").toString() == "mysql")
    {
        //        DbConfig::setConfig(dBSettings->value("user").toString().toStdString()
        //                            , dBSettings->value("password").toString().toStdString()
        //                                         , dBSettings->value("database").toString().toStdString()
        //                                          ,dBSettings->value("debug").toBool() );
    }

}

void Startup::stop() {
    delete listener;
    qWarning("Webserver has been stopped");
}

Startup::Startup(int argc, char *argv[])
    : QtService<QCoreApplication>(argc, argv, "MyFirstWebApp") {
    setServiceDescription("My first web server");
    setStartupType(QtServiceController::AutoStartup);
}
