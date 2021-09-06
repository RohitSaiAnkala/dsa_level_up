cmake_minimum_required(VERSION 3.19)
project(dsa_level_up)

set(CMAKE_CXX_STANDARD 14)

add_executable(unordered_set hash_tables/unordered_set.cpp)
add_executable(map_example hash_tables/map_example.cpp)
add_executable(linkedlist_cycle_detection hash_tables/linkedlist_cycle_detection.cpp)
add_executable(unordered_map_example hash_tables/unordered_map_example.cpp)
add_executable(2dvector 2dvector.cpp)
add_executable(vectordemo vectordemo.cpp)