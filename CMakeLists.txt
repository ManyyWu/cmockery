cmake_minimum_required(VERSION 3.1)

project(cmockery)

include_directories(.)

add_library(cmockery cmockery.c)

add_executable(cmockery_test
               run_test.c
               test-add-sub.c)
target_link_libraries(cmockery_test cmockery)
