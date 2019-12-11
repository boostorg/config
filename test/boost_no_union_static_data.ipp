//  (C) Copyright Edward Diener 2019

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX11_UNION_STATIC_DATA
//  TITLE:         C++11 union with static data unavailable
//  DESCRIPTION:   The compiler does not support C++11 union with static data

namespace boost_no_cxx11_union_static_data {

union with_static_data
    {
    int a;
    long b;
    static int sd;
    };
    
int with_static_data::sd = 0;

int test()
{
  with_static_data wsd;
  wsd.a = 24;
  wsd.b = 48L;
  with_static_data::sd = 1;
  bool b = (wsd.b == 48L && with_static_data::sd == 1);
  return b ? 0 : 1;
}

}
