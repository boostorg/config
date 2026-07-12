//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_CONTRACTS
//  TITLE:         <contracts>
//  DESCRIPTION:   The platform supports the <contracts> header.

#include <contracts>

namespace boost_no_cxx26_hdr_contracts {

int test()
{
    using std::contracts::assertion_kind;
    using std::contracts::evaluation_semantic;
    using std::contracts::detection_mode;
    using std::contracts::contract_violation;
    using std::contracts::invoke_default_contract_violation_handler;
    return 0;
}

}  //namespace boost_has_builtin_launder {

