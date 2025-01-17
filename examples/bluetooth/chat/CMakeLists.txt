cmake_minimum_required(VERSION 3.14)
project(qml_chat LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
  set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/bluetooth/chat")

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Bluetooth)
find_package(Qt6 COMPONENTS Quick)

qt_add_executable(qml_chat
    qmlchat.cpp
)
set_target_properties(qml_chat PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)
target_link_libraries(qml_chat PUBLIC
    Qt::Bluetooth
    Qt::Core
    Qt::Quick
)


# Resources:
set(chat_resource_files
    "Button.qml"
    "InputBox.qml"
    "Search.qml"
    "chat.qml"
    "images/clear.png"
    "images/default.png"
    "images/lineedit-bg.png"
)

qt6_add_resources(qml_chat "chat"
    PREFIX
        "/"
    FILES
        ${chat_resource_files}
)

if(ANDROID)
    find_package(Qt6 COMPONENTS AndroidExtras)
    target_link_libraries(qml_chat PUBLIC
        Qt::AndroidExtras
    )
endif()

install(TARGETS qml_chat
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
