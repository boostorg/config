
//  (C) Copyright Kohei Takahashi 2014

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX14_SIZED_DEALLOCATION
//  TITLE:         C++14 sized deallocation unavailable
//  DESCRIPTION:   The compiler does not support C++14 sized deallocation

namespace boost_no_cxx14_sized_deallocation
{

struct C
{
    static void operator delete(void *p, std::size_t l) BOOST_NOEXCEPT_OR_NOTHROW
    {
        ::operator delete(p, l);
    }
};

int test()
{
    return 0;
}

}

