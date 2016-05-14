#-------------------------------------------------
#
# Project created by QtCreator 2016-05-08T11:29:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project2
TEMPLATE = app


SOURCES += main.cpp\
        startwindow.cpp \
    gamewindow.cpp \
    drum2.cpp \
    maingame.cpp \
    Drum.cpp \
    drum1.cpp \
    end.cpp

HEADERS  += startwindow.h \
    gamewindow.h \
    drum2.h \
    maingame.h \
    Drum.h \
    drum1.h \
    end.h

FORMS    += startwindow.ui \
    gamewindow.ui \
    maingame.ui \
    end.ui

RESOURCES += \
    folder.qrc \
    gamescene.qrc \
    drum1.qrc \
    drum2.qrc
