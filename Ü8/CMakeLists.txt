cmake_minimum_required(VERSION 3.0)

project(ipk-uebung8 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -pedantic")

set(CMAKE_BUILD_TYPE=DEBUG)

message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")
message("CMAKE_CXX_FLAGS is ${CMAKE_CXX_FLAGS}")


# Erzeuge Bibliothek 
add_library(iteration_result iteration_result.cc canvas.hh point.hh)

# Ausführbares Programm ohne Quellen für Bibliothek
add_executable(main mn.cc)

# Programm gegen die Statistik-Bibliothek linken
target_link_libraries(main iteration_result)

