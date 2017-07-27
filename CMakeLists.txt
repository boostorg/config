cmake_minimum_required (VERSION 3.5)
project(boost_config)

enable_language(C)
enable_language(CXX)

find_package(BCM)
include(BCMDeploy)
include(BCMSetupVersion)

bcm_setup_version(VERSION 1.61.0)

add_library(boost_config INTERFACE)

bcm_deploy(TARGETS boost_config INCLUDE include)

add_subdirectory(test)
