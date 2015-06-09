//  (C) Copyright Edward Diener 2015

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX14_HDR_SHARED_MUTEX
//  TITLE:         C++0y header <shared_mutex> unavailable
//  DESCRIPTION:   The standard library does not supply C++0y header <shared_mutex>

#include <shared_mutex>

namespace boost_no_cxx14_hdr_shared_mutex {

int test()
{
  using std::shared_mutex;
  using std::shared_timed_mutex;
  return 0;
}

}
