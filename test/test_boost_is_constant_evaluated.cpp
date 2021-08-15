//  (C) Copyright John Maddock 2021.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/config.hpp>

#ifndef BOOST_NO_CXX11_HDR_TYPE_TRAITS
#include <type_traits>
#include <cstdlib>

#if BOOST_IS_CONSTANT_EVALUATED_VERSION >= 2
inline constexpr int factorial1(int i)
{
   if (!BOOST_IS_CONSTANT_EVALUATED())
   {
      std::abort();
   }
   else if (i == 1)
   {
      return 1;
   }
   else
      return i * factorial1(i - 1);
}
#endif
#if BOOST_IS_CONSTANT_EVALUATED_VERSION >= 1
inline constexpr int factorial2(int i)
{
   if (!BOOST_IS_CONSTANT_EVALUATED_INT(i))
   {
      std::abort();
   }
   else if (i == 1)
   {
      return 1;
   }
   else
      return i * factorial2(i - 1);
}
#endif
#endif

int main()
{
#if BOOST_IS_CONSTANT_EVALUATED_VERSION >= 2
   constexpr int f1 = factorial1(4);
   
   if (f1 != 24) 
      return 1;
#endif
#if BOOST_IS_CONSTANT_EVALUATED_VERSION >= 1
   constexpr int f2 = factorial2(4);
   
   if (f2 != 24) 
      return 1;
#endif
   return 0;
}

