TEMPLATE = app
TARGET = AnalogClock

QT = core gui

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

SOURCES += \
    AnalogClock.cpp \
    main.cpp

HEADERS += \
    AnalogClock.h
