# Copyright 2018 Mike Dev
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.5)
project(BoostFilesystem_test)

add_subdirectory(../.. ${CMAKE_CURRENT_BINARY_DIR}/boost_config)

add_executable(boost_config_cmake_compilation_test main.cpp)
target_link_libraries(boost_config_cmake_compilation_test Boost::config)


