
cmake_minimum_required(VERSION 3.15...4.1)

project(MIDiWay
    VERSION 0.1
    DESCRIPTION "Midi bridge/translation layer for X-Touch"
    LANGUAGES C
)



add_subdirectory(lib)
add_subdirectory(src)
