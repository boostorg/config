cmake_minimum_required(VERSION 3.8)
project(boost-config LANGUAGES CXX)

add_library(boost_config INTERFACE)
add_library(Boost::config ALIAS boost_config)

target_include_directories(boost_config INTERFACE include)
