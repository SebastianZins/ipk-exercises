cmake_minimum_required(VERSION 3.0)

project(ipk-uebung4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

# Erzeuge Bibliothek statistics
add_library(input input.cc lint.cc)

# Ausführbares Programm ohne Quellen für Bibliothek
add_executable(checkparens checkparens.cc)

# Programm gegen die Statistik-Bibliothek linken
target_link_libraries(checkparens input)
