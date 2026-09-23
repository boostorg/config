//  (C) Copyright Samuel Debionne 2025. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX17_DEFAULT_RESOURCE
//  TITLE:         no cxx17 default resource
//  DESCRIPTION:   The standard library is missing the default resource
//                 related functions.
//  
//                 std::pmr::set_default_resource()
//                 std::pmr::get_default_resource()

#include <memory_resource>

namespace boost_no_cxx17_default_resource{

int test()
{
    std::pmr::set_default_resource(nullptr);
    std::pmr::memory_resource* mr =std::pmr::get_default_resource();
    return 0;
}

}
