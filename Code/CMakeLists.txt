
cmake_minimum_required(VERSION 3.15...4.1)

project(MIDiWay
    VERSION 0.1
    DESCRIPTION "Midi bridge/translation layer for X-Touch"
    LANGUAGES C
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# TODO: remove devel from production builds
add_compile_definitions(APPLICATION_ID="com.github.tommie1236.midiway.devel")

add_subdirectory(lib)
add_subdirectory(src)
