# Use, modification, and distribution are
# subject to the Boost Software License, Version 1.0. (See accompanying
# file LICENSE.txt)
#
# Copyright Rene Rivera 2020.

# For Drone CI we use the Starlark scripting language to reduce duplication.
# As the yaml syntax for Drone CI is rather limited.
#
#
globalenv={}
linuxglobalimage="cppalliance/droneubuntu1604:1"
windowsglobalimage="cppalliance/dronevs2019"

def main(ctx):
  return [
  linux_cxx("g++-4.4 98,0x", "g++", packages="g++-4.4", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-4.4', 'B2_CXXSTD': '98,0x', }, globalenv=globalenv),
  linux_cxx("g++-4.6 03,0x", "g++", packages="g++-4.6", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-4.6', 'B2_CXXSTD': '03,0x', }, globalenv=globalenv),
  linux_cxx("g++-4.7 03,11", "g++-4.7", packages="g++-4.7", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-4.7', 'B2_CXXSTD': '03,11', }, globalenv=globalenv),
  linux_cxx("g++-4.8 03,11", "g++-4.8", packages="g++-4.8", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-4.8', 'B2_CXXSTD': '03,11', }, globalenv=globalenv),
  linux_cxx("g++-4.9 03,11", "g++-4.9", packages="g++-4.9", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-4.9', 'B2_CXXSTD': '03,11', }, globalenv=globalenv),
  linux_cxx("g++-5 03,11,14,1z", "g++-5", packages="g++-5", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-5', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("g++-5 gnu-03,11,14,1z", "g++-5", packages="g++-5", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-5', 'B2_CXXSTD': '03,11,14,1z', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-6 03,11,14,1z", "g++-6", packages="g++-6", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-6', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("g++-6 gnu++03,11,14,1z Job 9", "g++-6", packages="g++-6", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-6', 'B2_CXXSTD': '03,11,14,1z', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-7 03,11,14,17", "g++-7", packages="g++-7", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-7', 'B2_CXXSTD': '03,11,14,17', }, globalenv=globalenv),
  linux_cxx("g++-7 gnu++03,11,14,17", "g++-7", packages="g++-7", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-7', 'B2_CXXSTD': '03,11,14,17', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-8 03,11,14,17", "g++-8", packages="g++-8", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-8', 'B2_CXXSTD': '03,11,14,17', }, globalenv=globalenv),
  linux_cxx("g++-8 gnu++03,11,14,17", "g++-8", packages="g++-8", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-8', 'B2_CXXSTD': '03,11,14,17', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-9 03,11,14,17", "g++-9", packages="g++-9", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-9', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  linux_cxx("g++-9 gnu++03,11,14,17", "g++-9", packages="g++-9", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-9', 'B2_CXXSTD': '03,11,14,17,2a', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-10 03,11,14,17,20", "g++-10", packages="g++-10", image="cppalliance/droneubuntu2004:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-10', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("g++-10 gnu++03,11,14,17,20", "g++-10", packages="g++-10", image="cppalliance/droneubuntu2004:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-10', 'B2_CXXSTD': '03,11,14,17,20', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-11 03,11,14,17,20", "g++-11", packages="g++-11", image="cppalliance/droneubuntu2204:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-11', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("g++-11 gnu++03,11,14,17,20", "g++-11", packages="g++-11", image="cppalliance/droneubuntu2204:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-11', 'B2_CXXSTD': '03,11,14,17,20', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-12 03,11,14,17,20", "g++-12", packages="g++-12", image="cppalliance/droneubuntu2404:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-12', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("g++-12 gnu++03,11,14,17,20", "g++-12", packages="g++-12", image="cppalliance/droneubuntu2404:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-12', 'B2_CXXSTD': '03,11,14,17,20', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-13 03,11,14,17,20,23", "g++-13", packages="g++-13", image="cppalliance/droneubuntu2404:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-13', 'B2_CXXSTD': '03,11,14,17,20,23', }, globalenv=globalenv),
  linux_cxx("g++-13 gnu++03,11,14,17,20,23", "g++-13", packages="g++-13", image="cppalliance/droneubuntu2404:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-13', 'B2_CXXSTD': '03,11,14,17,20,23', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-14 03,11,14,17,20,23", "g++-14", packages="g++-14", image="cppalliance/droneubuntu2604:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-14', 'B2_CXXSTD': '03,11,14,17,20,23', }, globalenv=globalenv),
  linux_cxx("g++-14 gnu++03,11,14,17,20,23", "g++-14", packages="g++-14", image="cppalliance/droneubuntu2604:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-14', 'B2_CXXSTD': '03,11,14,17,20,23', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-15 03,11,14,17,20,23", "g++-15", packages="g++-15", image="cppalliance/droneubuntu2604:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-15', 'B2_CXXSTD': '03,11,14,17,20,23', }, globalenv=globalenv),
  linux_cxx("g++-15 gnu++03,11,14,17,20,23", "g++-15", packages="g++-15", image="cppalliance/droneubuntu2604:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-15', 'B2_CXXSTD': '03,11,14,17,20,23', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),
  linux_cxx("g++-16 11,14,17,20,23,26", "g++-16", packages="g++-16", image="cppalliance/droneubuntu2604:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-16', 'B2_CXXSTD': '11,14,17,20,23,26', }, globalenv=globalenv),
  linux_cxx("g++-16 gnu++11,14,17,20,23,26", "g++-16", packages="g++-16", image="cppalliance/droneubuntu2604:1", buildtype="boost", environment={'B2_TOOLSET': 'gcc', 'B2_COMPILER': 'g++-16', 'B2_CXXSTD': '11,14,17,20,23,26', 'B2_CXXSTD_DIALECT': 'cxxstd-dialect=gnu', }, globalenv=globalenv),

  linux_cxx("clang++-3.5 03", "clang++", packages="clang-3.5", llvm_os="precise", llvm_ver="3.5", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-3.5', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-3.6 03", "clang++", packages="clang-3.6", llvm_os="precise", llvm_ver="3.6", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-3.6', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-3.7 03", "clang++", packages="clang-3.7", llvm_os="precise", llvm_ver="3.7", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-3.7', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-3.8 03", "clang++-3.8", packages="clang-3.8", llvm_os="precise", llvm_ver="3.8", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-3.8', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-3.9 03", "clang++-3.9", packages="clang-3.9", llvm_os="precise", llvm_ver="3.9", buildtype="boost", image="cppalliance/droneubuntu1404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-3.9', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-4.0 03", "clang++-4.0", packages="clang-4.0", llvm_os="xenial", llvm_ver="4.0", buildtype="boost", image=linuxglobalimage, environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-4.0', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-5.0 03", "clang++-5.0", packages="clang-5.0", llvm_os="xenial", llvm_ver="5.0", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-5.0', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-6.0 03", "clang++-6.0", packages="clang-6.0", llvm_os="xenial", llvm_ver="6.0", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-6.0', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-7 03,11,14,17", "clang++-7", packages="clang-7", llvm_os="xenial", llvm_ver="7", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-7', 'B2_CXXSTD': '03,11,14,1z', }, globalenv=globalenv),
  linux_cxx("clang++-8 03,11,14,17", "clang++-8", packages="clang-8", llvm_os="xenial", llvm_ver="8", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-8', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  linux_cxx("clang++-9 03,11,14,17,2a", "clang++-9", packages="clang-9", llvm_os="xenial", llvm_ver="9", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-9', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  linux_cxx("clang++-10 03,11,14,17,20", "clang++-10", packages="clang-10", llvm_os="xenial", llvm_ver="10", buildtype="boost", image="cppalliance/droneubuntu1804:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-10', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-11 03,11,14,17,20", "clang++-11", packages="clang-11", llvm_os="focal", llvm_ver="11", buildtype="boost", image="cppalliance/droneubuntu2004:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-11', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-12 03,11,14,17,20", "clang++-12", packages="clang-12", llvm_os="focal", llvm_ver="12", buildtype="boost", image="cppalliance/droneubuntu2004:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-12', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-13 03,11,14,17,20", "clang++-13", packages="clang-13", llvm_ver="13", buildtype="boost", image="cppalliance/droneubuntu2204:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-13', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-14 03,11,14,17,20", "clang++-14", packages="clang-14", llvm_ver="14", buildtype="boost", image="cppalliance/droneubuntu2204:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-14', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-15 03,11,14,17,20", "clang++-15", packages="clang-15", llvm_ver="15", buildtype="boost", image="cppalliance/droneubuntu2204:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-15', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-16 03,11,14,17,20", "clang++-16", packages="clang-16", llvm_ver="16", buildtype="boost", image="cppalliance/droneubuntu2404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-16', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-17 03,11,14,17,20", "clang++-17", packages="clang-17", llvm_ver="17", buildtype="boost", image="cppalliance/droneubuntu2404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-17', 'B2_CXXSTD': '03,11,14,17,20', }, globalenv=globalenv),
  linux_cxx("clang++-18 11,14,17,20,23", "clang++-18", packages="clang-18", llvm_ver="18", buildtype="boost", image="cppalliance/droneubuntu2404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-18', 'B2_CXXSTD': '03,11,14,17,20,23', }, globalenv=globalenv),
  linux_cxx("clang++-19 11,14,17,20,23", "clang++-19", packages="clang-19", llvm_ver="19", buildtype="boost", image="cppalliance/droneubuntu2404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-19', 'B2_CXXSTD': '03,11,14,17,20,23', }, globalenv=globalenv),
  linux_cxx("clang++-20 11,14,17,20,23", "clang++-20", packages="clang-20", llvm_ver="20", buildtype="boost", image="cppalliance/droneubuntu2404:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-20', 'B2_CXXSTD': '03,11,14,17,20,23', }, globalenv=globalenv),
  linux_cxx("clang++-21 11,14,17,20,23,26", "clang++-21", packages="clang-21", llvm_ver="21", buildtype="boost", image="cppalliance/droneubuntu2604:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-21', 'B2_CXXSTD': '03,11,14,17,20,23,26', }, globalenv=globalenv),
  linux_cxx("clang++-22 11,14,17,20,23,26", "clang++-22", packages="clang-22", llvm_ver="22", buildtype="boost", image="cppalliance/droneubuntu2604:1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++-22', 'B2_CXXSTD': '03,11,14,17,20,23,26', }, globalenv=globalenv),
  
  osx_cxx("XCode-10.2 03,11,17,2a", "clang++", packages="", buildtype="boost", xcode_version="10.2", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  osx_cxx("XCode-11.7 03,11,17,2a", "clang++", packages="", buildtype="boost", xcode_version="11.7", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  osx_cxx("XCode-12.5.1 03,11,17,23", "clang++", packages="", buildtype="boost", xcode_version="12.5.1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  osx_cxx("XCode-13.4.1 03,11,17,23", "clang++", packages="", buildtype="boost", xcode_version="13.4.1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,2a', }, globalenv=globalenv),
  osx_cxx("XCode-14.3.1 03,11,17,23", "clang++", packages="", buildtype="boost", xcode_version="14.3.1", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,23', }, globalenv=globalenv),
  osx_cxx("XCode-15.4.0 03,11,17,23", "clang++", packages="", buildtype="boost", xcode_version="15.4.0", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,23', }, globalenv=globalenv),
  osx_cxx("XCode-16.4.0 03,11,17,23", "clang++", packages="", buildtype="boost", xcode_version="16.4.0", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,23', }, globalenv=globalenv),
  osx_cxx("XCode-26.2.0 03,11,17,23,26", "clang++", packages="", buildtype="boost", xcode_version="26.2.0", environment={'B2_TOOLSET': 'clang', 'B2_COMPILER': 'clang++', 'B2_CXXSTD': '03,11,14,17,23,26', }, globalenv=globalenv),
  ]

# from https://github.com/boostorg/boost-ci
load("@boost_ci//ci/drone/:functions.star", "linux_cxx","windows_cxx","osx_cxx","freebsd_cxx")
