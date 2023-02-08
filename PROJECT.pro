QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    displayresult.cpp \
    game.cpp \
    instructions.cpp \
    main.cpp \
    mainwindow.cpp \
    name.cpp \
    play.cpp \
    user.cpp \
    userparticipant.cpp

HEADERS += \
    displayresult.h \
    game.h \
    instructions.h \
    mainwindow.h \
    name.h \
    play.h \
    user.h \
    userparticipant.h

FORMS += \
    displayresult.ui \
    game.ui \
    instructions.ui \
    mainwindow.ui \
    name.ui \
    play.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
