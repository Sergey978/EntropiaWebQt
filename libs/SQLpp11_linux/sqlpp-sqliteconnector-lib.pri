INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

# Enable very detailed debug messages when compiling the debug version
CONFIG(debug, debug|release) {
    DEFINES += SUPERVERBOSE
}




LIBS += $$PWD/libsqlpp11-connector-sqlite3.a  -lsqlite3


HEADERS += $$PWD/sqlpp11


