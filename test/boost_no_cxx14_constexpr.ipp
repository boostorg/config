
//  (C) Copyright Kohei Takahashi 2014

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX14_CONSTEXPR
//  TITLE:         C++14 relaxed constexpr unavailable
//  DESCRIPTION:   The compiler does not support C++14 relaxed constexpr

namespace boost_no_cxx14_constexpr
{

constexpr void decrement(int &value)
{
    --value;
}

constexpr int zero()
{
    int ret = 1;
    decrement(ret);
    return ret;
}

int test()
{
    return zero();
}

}

