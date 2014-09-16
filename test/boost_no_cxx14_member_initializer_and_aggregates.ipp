
//  (C) Copyright Kohei Takahashi 2014

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX14_MEMBER_INITIALIZERS_AND_AGGREGATES
//  TITLE:         C++14 member initializers unavailable
//  DESCRIPTION:   The compiler does not support C++14 member initializers

namespace boost_no_cxx14_member_initializers_and_aggregates
{

struct S
{
    int x;
    int y = 0;
};

int test()
{
    S s[] = { { 0x72 }, { 0x42 } };
    return s[1].x - 0x42;
}

}

