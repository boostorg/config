
//  (C) Copyright Kohei Takahashi 2014

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX14_DEPRECATED_ATTRIBUTES
//  TITLE:         C++14 deprecated attributes unavailable
//  DESCRIPTION:   The compiler does not support C++14 deprecated attributes

namespace boost_no_cxx14_deprecated_attributes
{

[[deprecated]]
void foo()
{
}

[[deprecated("use bar instead")]]
void bar()
{
}

void baz()
{
}

int test()
{
    foo();
    bar();
    baz();
    return 0;
}

}

