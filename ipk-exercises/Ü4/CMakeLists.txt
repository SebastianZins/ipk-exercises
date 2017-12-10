cmake_minimum_required(VERSION 3.0)

project(ipk-uebung4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

# Erzeuge Bibliothek statistics
add_library(statistics statistics.cc io.cc)

# Ausführbares Programm ohne Quellen für Bibliothek
add_executable(normal normal.cc)
add_executable(readvector readvector.cc)
add_executable(uniform uniform.cc)

# Programm gegen die Statistik-Bibliothek linken
target_link_libraries(normal statistics)
target_link_libraries(readvector statistics)
target_link_libraries(uniform statistics)