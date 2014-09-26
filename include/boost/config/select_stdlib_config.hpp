//  Boost compiler configuration selection header file

//  (C) Copyright John Maddock 2001 - 2003. 
//  (C) Copyright Jens Maurer 2001 - 2002. 
//  (C) Copyright Ion Gaztanaga 2014. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)


//  See http://www.boost.org for most recent version.

// locate which std lib we are using and define BOOST_STDLIB_CONFIG as needed:

// First include <cstddef> to determine if some version of std lib is in use
// (do not rely on this header being included since users can short-circuit this header 
//  if they know whose std lib they are using.)
#ifdef __cplusplus
#  include <cstddef>
#else
#  include <stddef.h>
#endif

#include <boost/config/select_stdlib_config_detect.hpp>

// If our std lib was not detected with cstddef, then include <utility> as it is about 
// the smallest of the std lib headers that includes real C++ stuff. (Some std libs do not
// include their C++-related macros in <cstddef> so this additional include makes sure
// we get those definitions)
// (again do not rely on this header being included since users can short-circuit this 
//  header if they know whose std lib they are using.)
#if !defined(BOOST_STDLIB_CONFIG)
#  include <boost/config/no_tr1/utility.hpp>
#  include <boost/config/select_stdlib_config_detect.hpp>
#endif 

#if !defined(BOOST_STDLIB_CONFIG) && defined(BOOST_ASSERT_CONFIG)
// this must come last - generate an error if we don't
// recognise the library:
#  error "Unknown standard library - please configure and report the results to boost.org"

#endif
