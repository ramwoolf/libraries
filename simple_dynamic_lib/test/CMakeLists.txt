cmake_minimum_required(VERSION 3.0)
project(test_dynamic_lib)

find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include_directories(../include ${GTEST_INCLUDE_DIRS})

add_executable(${PROJECT}_Test test_dynamic_lib.cpp)
target_link_libraries(${PROJECT}_Test ${PROJECT} gmock_main ${GTEST_LIBRARIES})

add_test(${PROJECT}_Test Test_DynLib)

set(INSTALL_NAME_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../bin/tests)
install(TARGETS ${PROJECT}_Test DESTINATION ${INSTALL_NAME_DIR})