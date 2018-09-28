# Copyright 2018 Mike Dev
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.5)
project(BoostConfig LANGUAGES CXX)

add_library(boost_config INTERFACE)
add_library(Boost::config ALIAS boost_config)

target_include_directories(boost_config INTERFACE include)
