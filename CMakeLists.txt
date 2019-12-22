# Copyright 2018 Mike Dev
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
# DO NOT RELY ON THE CONTENTS OF THIS FILE!!!
#

cmake_minimum_required(VERSION 3.5...3.16)
project(boost_config VERSION "${BOOST_SUPERPROJECT_VERSION}" LANGUAGES CXX)

add_library(boost_config INTERFACE)
add_library(Boost::config ALIAS boost_config)

set_property(TARGET boost_config PROPERTY EXPORT_NAME config)

target_include_directories(boost_config
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

include(BoostInstall OPTIONAL RESULT_VARIABLE HAVE_BOOST_INSTALL)

if(HAVE_BOOST_INSTALL)

    install(DIRECTORY include/ DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")

    boost_install(boost_config)

endif()
