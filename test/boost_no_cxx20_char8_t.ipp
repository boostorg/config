//  (C) Copyright John Maddock 2026

//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for more information.

//  MACRO:         BOOST_NO_CXX20_CHAR8_T
//  TITLE:         C++20 char8_t unavailable
//  DESCRIPTION:   The compiler does not support C++20 char8_t

namespace boost_no_cxx20_char8_t {

//  char8_t must be a distinct type and not a typedef:
void f(const char8_t*){}
void f(const unsigned char*){}
void f(const signed char*){}
void f(const char*){}

int test()
{
  const char8_t p(0);
  f(&p);
  return 0;
}

}
