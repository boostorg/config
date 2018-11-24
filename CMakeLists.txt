# Copyright 2018 Mike Dev
# Copyright 2018 Roger Leigh
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
#
#  CAUTION!!!!
#
# This addition to Boost.Config should be considered experimental and is part
# of an ongoing effort to add CMake support Boost-wide.
#
# IT IS HIGHLY LIKELY THAT THIS FILE WILL CHANGE WITHOUT NOTICE!!!
#
# DO NOT REPLY ON THE CONTENTS OF THIS FILE!!!
#

cmake_minimum_required(VERSION 3.5)
project(BoostConfig VERSION 1.69 LANGUAGES CXX)

add_library(boost_config INTERFACE)
add_library(Boost::config ALIAS boost_config)

target_include_directories(boost_config INTERFACE
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

set_target_properties(boost_config PROPERTIES EXPORT_NAME "Boost::config")

# Install headers
include(GNUInstallDirs)
install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/boost"
  DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
  COMPONENT "development")

# Install exported configuration
if(WIN32)
  set(boost_config_config_dir "cmake")
else()
  set(boost_config_config_dir "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}")
endif()

install(TARGETS boost_config
        EXPORT BoostConfigInternal
        COMPONENT "runtime"
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")
install(EXPORT BoostConfigInternal
        DESTINATION "${boost_config_config_dir}"
        COMPONENT "development")
include(CMakePackageConfigHelpers)
configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}Config.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  INSTALL_DESTINATION "${boost_config_config_dir}")
write_basic_package_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake
  VERSION "${PROJECT_VERSION}"
  COMPATIBILITY SameMinorVersion)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake
        DESTINATION "${boost_config_config_dir}"
        COMPONENT "development")
