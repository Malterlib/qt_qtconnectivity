#####################################################################
## bluetooth Plugin:
#####################################################################

qt_internal_add_qml_module(declarative_bluetooth
    URI "QtBluetooth"
    VERSION "${CMAKE_PROJECT_VERSION}"
    CLASSNAME QBluetoothQmlPlugin
    SKIP_TYPE_REGISTRATION
    SOURCES
        plugin.cpp
        qdeclarativebluetoothdiscoverymodel.cpp qdeclarativebluetoothdiscoverymodel_p.h
        qdeclarativebluetoothservice.cpp qdeclarativebluetoothservice_p.h
        qdeclarativebluetoothsocket.cpp qdeclarativebluetoothsocket_p.h
    DEFINES
        QT_DISABLE_DEPRECATED_BEFORE=0
    PUBLIC_LIBRARIES
        Qt::Bluetooth
        Qt::Core
        Qt::Quick
)

#### Keys ignored in scope 1:.:.:bluetooth.pro:<TRUE>:
# QML_IMPORT_VERSION = "$$QT_VERSION"
# TARGETPATH = "QtBluetooth"
