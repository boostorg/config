//  This file was automatically generated on Sat Jul 11 14:12:59 2026
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-21.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id$
//


// Test file for macro BOOST_NO_CXX26_HDR_HIVE
// This file should compile, if it does not then
// BOOST_NO_CXX26_HDR_HIVE should be defined.
// See file boost_no_cxx26_hdr_hive.ipp for details

// Must not have BOOST_ASSERT_CONFIG set; it defeats
// the objective of this file:
#ifdef BOOST_ASSERT_CONFIG
#  undef BOOST_ASSERT_CONFIG
#endif

#include <boost/config.hpp>
#include "test.hpp"

#ifndef BOOST_NO_CXX26_HDR_HIVE
#include "boost_no_cxx26_hdr_hive.ipp"
#else
namespace boost_no_cxx26_hdr_hive = empty_boost;
#endif

int main( int, char *[] )
{
   return boost_no_cxx26_hdr_hive::test();
}

