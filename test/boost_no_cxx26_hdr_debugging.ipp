//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_DEBUGGING
//  TITLE:         <debugging>
//  DESCRIPTION:   The platform supports the <debugging> header.

#include <debugging>

namespace boost_no_cxx26_hdr_debugging {

int test()
{
    using std::breakpoint;
    using std::breakpoint_if_debugging;
    using std::is_debugger_present;
    return 0;
}

}  //namespace boost_has_builtin_launder {

