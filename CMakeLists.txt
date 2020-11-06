cmake_minimum_required(VERSION 3.12)

project(qtscxml-tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets Qml Scxml REQUIRED)
set(CMAKE_AUTOMOC ON)

include(behavior_trees)
include(skills)
include(components)
