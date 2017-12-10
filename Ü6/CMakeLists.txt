cmake_minimum_required(VERSION 3.0)

project(ipk-uebung6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")
message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")


# Erzeuge Bibliothek 
add_library(lib canvas.cc point.cc)

# Ausführbares Programm ohne Quellen für Bibliothek
add_executable(main main.cc)

# Programm gegen die Statistik-Bibliothek linken
target_link_libraries(main lib)
