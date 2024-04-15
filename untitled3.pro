QT       += core gui \
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cadastrarVeiculo.cpp \
    cadastrarmarca.cpp \
    excluirVeiculo.cpp \
    listarVeiculo.cpp \
    listarmarca.cpp \
    main.cpp \
    mainwindow.cpp \
    marca.cpp \
    marcarepository.cpp \
    veiculo.cpp \
    veiculorepository.cpp

HEADERS += \
    cadastrarVeiculo.h \
    cadastrarmarca.h \
    excluirVeiculo.h \
    listarVeiculo.h \
    listarmarca.h \
    mainwindow.h \
    marca.h \
    marcarepository.h \
    veiculo.h \
    veiculorepository.h

FORMS += \
    cadastrarVeiculo.ui \
    cadastrarmarca.ui \
    excluirVeiculo.ui \
    listarVeiculo.ui \
    listarmarca.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
