INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

# Enable very detailed debug messages when compiling the debug version
CONFIG(debug, debug|release) {
    DEFINES += SUPERVERBOSE
}



LIBS += $$PWD/libsqlpp11-connector-sqlite3.a \
        $$PWD/libsqlite3.a

HEADERS += $$PWD/sqlpp11/sqlite3 \
           $$PWD/date  \
           $$PWD/sqlite3 \


