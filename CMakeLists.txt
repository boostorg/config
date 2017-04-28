cmake_minimum_required (VERSION 2.8)
project(Boost.Config)

enable_language(C)
enable_language(CXX)

find_package(BCM)
include(BCMPackage)
include(BCMTest)
include(BCMProperties)

bcm_boost_package(config
    VERSION 1.61.0
)

add_subdirectory(test)
