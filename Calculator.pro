#-------------------------------------------------
#
# Project created by QtCreator 2014-08-05T20:32:54
#
#-------------------------------------------------

QT       += core gui
QT       += qml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    fraction.cpp \
    mixednumber.cpp \
    parser.cpp

HEADERS  += mainwindow.h \
    fraction.h \
    mixednumber.h \
    myStack.h \
    node.h \
    ui_mainwindow.h \
    myQueue.h \
    parser.h

FORMS    += mainwindow.ui

RESOURCES += \
    img.qrc

OTHER_FILES +=
