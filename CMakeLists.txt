cmake_minimum_required(VERSION 3.1)

project(cmokery)

include_directories(.)

add_library(cmockery cmockery.c)

add_executable(cmockery_test test.c)
target_link_libraries(cmockery_test cmockery)
