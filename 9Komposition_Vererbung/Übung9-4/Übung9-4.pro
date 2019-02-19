TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    fahrroboter.cpp \
    saugroboter.cpp \
    wischroboter.cpp \
    fensterputzroboter.cpp

HEADERS += \
    fahrroboter.h \
    saugroboter.h \
    wischroboter.h \
    fensterputzroboter.h

