
//  (C) Copyright Oliver Kowalke 2015

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX14_INTEGER_SEQUENCE
//  TITLE:         C++14 compile-time integer sequence unavailable
//  DESCRIPTION:   The compiler does not support C++14 compile-time integer sequence (std::integer_sequence<>).

#include <utility>

namespace boost_no_cxx14_integer_sequence
{

template<class... I>
void f(I...)
{
    std::index_sequence_for<I...>{};
}

int test()
{
    f(1, 2, 3);
    return 0;
}

}

