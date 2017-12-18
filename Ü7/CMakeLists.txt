cmake_minimum_required(VERSION 3.0)

project(ipk-uebung7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -pedantic")

set(CMAKE_BUILD_TYPE=DEBUG)

message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")
message("CMAKE_CXX_FLAGS is ${CMAKE_CXX_FLAGS}")


# Erzeuge Bibliothek 
add_library(sanitizeword sanitizeword.cc)
add_library(histogramLib histogram.cc io.cc)

# Ausführbares Programm ohne Quellen für Bibliothek
add_executable(letterfrequencies letterfrequencies.cc)
add_executable(wordfrequencies wordfrequencies.cc)
add_executable(histogram histo.cc)

# Programm gegen die Statistik-Bibliothek linken
target_link_libraries(letterfrequencies histogramLib sanitizeword)
target_link_libraries(wordfrequencies histogramLib sanitizeword)
target_link_libraries(histogram histogramLib)

