cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(uma-plugin-lib
VERSION 0.1.0
DESCRIPTION "UMA plugin library"
HOMEPAGE_URL "https://github.com/UmaPump/uma-plugin-lib"
LANGUAGES C CXX
)

include(GNUInstallDirs)

add_library(${PROJECT_NAME} INTERFACE)
add_library(UMA::PluginLib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
INTERFACE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
)
