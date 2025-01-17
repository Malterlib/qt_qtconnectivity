cmake_minimum_required(VERSION 3.14)
project(qml_scanner LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
  set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/bluetooth/scanner")

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Bluetooth)
find_package(Qt6 COMPONENTS Quick)

qt_add_executable(qml_scanner
    qmlscanner.cpp
)
set_target_properties(qml_scanner PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)
target_link_libraries(qml_scanner PUBLIC
    Qt::Bluetooth
    Qt::Core
    Qt::Quick
)


# Resources:
set(scanner_resource_files
    "Button.qml"
    "default.png"
    "scanner.qml"
)

qt6_add_resources(qml_scanner "scanner"
    PREFIX
        "/"
    FILES
        ${scanner_resource_files}
)

install(TARGETS qml_scanner
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
