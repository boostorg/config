//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_RCU
//  TITLE:         <rcu>
//  DESCRIPTION:   The platform supports the <rcu> header.

#include <linalg>

namespace boost_no_cxx26_hdr_rcu {

int test()
{
    using std::rcu_obj_base;
    using std::rcu_domain;
    using std::rcu_default_domain;
    using std::rcu_synchronize;
    using std::rcu_barrier;
    using std::rcu_retire;
    return 0;
}

}  //namespace boost_no_cxx26_hdr_rcu {

