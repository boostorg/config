//  This file was automatically generated on Fri Dec 03 18:03:59 2004
//  by libs/config/tools/generate.cpp
//  Copyright Ion Gaztanaga 2022.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.

// Test file for macro BOOST_HAS_BUILTIN_LAUNDER
// This file should not compile, if it does then
// BOOST_HAS_BUILTIN_LAUNDER should be defined.
// See file boost_has_builtin_launder.ipp for details

// Must not have BOOST_ASSERT_CONFIG set; it defeats
// the objective of this file:
#ifdef BOOST_ASSERT_CONFIG
#  undef BOOST_ASSERT_CONFIG
#endif

#include <boost/config.hpp>

#ifndef BOOST_HAS_BUILTIN_LAUNDER
#include "boost_has_builtin_launder.ipp"
#else
#error "this file should not compile"
#endif

int main( int, char *[] )
{
   return boost_has_builtin_launder::test();
}
