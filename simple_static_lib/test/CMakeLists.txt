cmake_minimum_required(VERSION 3.0)
project(test_static_lib)

find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include_directories(../include ${GTEST_INCLUDE_DIRS})

add_executable(${PROJECT}_Test test_static_lib.cpp)
target_link_libraries(${PROJECT}_Test ${PROJECT} gmock_main ${GTEST_LIBRARIES})

add_test(${PROJECT}_Test Test_StLib)

set(INSTALL_NAME_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../bin/tests)
install(TARGETS ${PROJECT}_Test DESTINATION ${INSTALL_NAME_DIR})

add_custom_command(TARGET ${PROJECT}_Test
                    POST_BUILD
                    COMMAND ${PROJECT}_Test
                    WORKING_DIRECTORY ${INSTALL_NAME_DIR}
                    COMMENT "Running UT, ${PROJECT}_Test" VERBATIM)