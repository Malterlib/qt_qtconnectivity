#####################################################################
## tst_qbluetoothtransferrequest Test:
#####################################################################

qt_internal_add_test(tst_qbluetoothtransferrequest
    SOURCES
        tst_qbluetoothtransferrequest.cpp
    PUBLIC_LIBRARIES
        Qt::Bluetooth
        Qt::Concurrent
)
