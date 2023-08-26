cmake_minimum_required (VERSION 3.8)

project ("29-1-superdog")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(29-1-superdog "main.cpp" ${MY_INCLUDE_DIR}/animal.h "animal.cpp" ${MY_INCLUDE_DIR}/dog.h "dog.cpp" ${MY_INCLUDE_DIR}/talent.h "talent.cpp" ${MY_INCLUDE_DIR}/dancing.h "dancing.cpp" ${MY_INCLUDE_DIR}/swiming.h "swiming.cpp" ${MY_INCLUDE_DIR}/counting.h "counting.cpp" ${MY_INCLUDE_DIR}/functions.h)

target_include_directories(29-1-superdog PUBLIC ${CMAKE_SOURCE_DIR}/include)