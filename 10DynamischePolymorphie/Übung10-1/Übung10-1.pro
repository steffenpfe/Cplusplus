TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    buch.cpp \
    sachbuch.cpp \
    medizinbuch.cpp \
    roman.cpp

HEADERS += \
    buch.h \
    sachbuch.h \
    medizinbuch.h \
    roman.h

