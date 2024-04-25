TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QT += multimedia

SOURCES += \
        main.cpp \
    jeuserpent.cpp \
    plateaujeu.cpp \
    serpent.cpp \
    vitamine.cpp

HEADERS += \
    jeuserpent.h \
    plateaujeu.h \
    serpent.h \
    vitamine.h \
    positionxy.h

