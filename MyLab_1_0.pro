QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AutoEnterprise.cpp \
    ChockolateEnterprise.cpp \
    Enterprise.cpp \
    EnterpriseRegister.cpp \
    TEST_CLASS.cpp \
    UI_mainwindow.cpp \
    WeaponEnterprice.cpp \
    main.cpp

HEADERS += \
    AutoEnterprise.h \
    AutoEnterprise.h \
    ChockolateEnterprise.h \
    Enterprise.h \
    EnterpriseRegister.h \
    TEST_CLASS.h \
    UI_mainwindow.h \
    WeaponEnterprice.h

FORMS += \
    UI_mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
