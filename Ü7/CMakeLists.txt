cmake_minimum_required(VERSION 3.0)

project(ipk-uebung6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)


# Set default compile flags for GCC
if(CMAKE_COMPILER_IS_GNUCXX)
    message(STATUS "GCC detected, adding compile flags")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98 -pedantic -Wall -Wextra")
endif(CMAKE_COMPILER_IS_GNUCXX)


# Erzeuge Bibliothek 
add_library(lib canvas.cc point.cc)

# Ausführbares Programm ohne Quellen für Bibliothek
add_executable(main main.cc)

# Programm gegen die Statistik-Bibliothek linken
target_link_libraries(main lib)
