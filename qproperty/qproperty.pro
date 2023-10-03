
TARGET = qproperty
include($$PWD/qproperty.pri)
TEMPLATE = lib
CONFIG += shared
DESTDIR = $$PWD/lib

CONFIG(debug, debug|release): TARGET = $$TARGET"d"

