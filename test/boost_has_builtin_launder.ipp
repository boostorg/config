//  (C) Copyright Ion Gaztanaga 2022.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_HAS_BUILTIN_LAUNDER
//  TITLE:         __builtin_launder
//  DESCRIPTION:   The platform supports __builtin_launder.

#include <new>

namespace boost_has_builtin_launder {

struct X
{
    const int const_int;
};

int test()
{
    X original{1};
    new (&original) X{2}; //Overwrite X
    return __builtin_launder(&original)->const_int == 2 ? 0 : -1; //After laundering, new value should be returned
}

}  //namespace boost_has_builtin_launder {

