//  (C) Copyright Ion Gaztanaga. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX17_STD_LAUNDER
//  TITLE:         launder
//  DESCRIPTION:   The compiler supports the std::launder() function.

#include <new>

namespace boost_no_cxx17_std_launder {

struct X
{
    const int const_int;
};

int test()
{
    X original{1};
    new (&original) X{2}; //Overwrite X
    return std::launder(&original)->const_int == 2 ? 0 : -1; //After laundering, new value should be returned
}

}
