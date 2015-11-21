#-------------------------------------------------
#
# Project created by QtCreator 2013-03-16T15:44:57
#
#-------------------------------------------------

QT       += core gui

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

unix:!macx:!symbian: LIBS += -L$$PWD/includes/libs/ -lopencv_core

INCLUDEPATH += $$PWD/includes/opencv2
DEPENDPATH += $$PWD/includes/opencv2

INCLUDEPATH += $$PWD/includes/opencv
DEPENDPATH += $$PWD/includes/opencv

unix:!macx:!symbian: LIBS += -L$$PWD/includes/libs/ -lopencv_highgui

INCLUDEPATH += $$PWD/includes/libs
DEPENDPATH += $$PWD/includes/libs

unix:!macx:!symbian: LIBS += -L$$PWD/includes/libs/ -lopencv_imgproc

INCLUDEPATH += $$PWD/includes/libs
DEPENDPATH += $$PWD/includes/libs
