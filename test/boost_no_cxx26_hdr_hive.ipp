//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_HIVE
//  TITLE:         <hive>
//  DESCRIPTION:   The platform supports the <hive> header.

#include <hive>

namespace boost_no_cxx26_hdr_hive {

int test()
{
    using std::hive_limits;
    using std::hive;
    using std::swap;
    using std::erase;
    using std::erase_if;
    using std::pmr::hive;
    return 0;
}

}  //namespace boost_has_builtin_launder {

