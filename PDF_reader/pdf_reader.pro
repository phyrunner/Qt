QT  += core gui widgets pdfwidgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bookmark_managetool.cpp \
    main.cpp \
    pdf_reader.cpp \
    test_window_1.cpp \
    zoom_selector.cpp

HEADERS += \
    bookmark_managetool.h \
    pdf_reader.h \
    test_window_1.h \
    zoom_selector.h

FORMS += \
    pdf_reader.ui \
    test_window_1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
