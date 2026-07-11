//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_HAZARD_POINTER
//  TITLE:         <hazard_pointer>
//  DESCRIPTION:   The platform supports the <hazard_pointer> header.

#include <hazard_pointer>

namespace boost_no_cxx26_hdr_hazard_pointer {

int test()
{
    using std::hazard_pointer_obj_base;
    using std::hazard_pointer;
    using std::make_hazard_pointer();
    using std::swap;
    return 0;
}

}  //namespace boost_has_builtin_launder {

