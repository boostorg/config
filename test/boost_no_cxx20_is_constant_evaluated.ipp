//  (C) Copyright John Maddock 2021.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX20_IS_CONSTANT_EVALUATED
//  TITLE:         std::is_constant_evaluated
//  DESCRIPTION:   The std lib has is_constant_evaluated.

#include <type_traits>

namespace boost_no_cxx20_is_constant_evaluated{

   inline constexpr int factorial(int i)
   {
      if (!std::is_constant_evaluated())
      {
         std::abort();
      }
      else if (i == 1)
      {
         return 1;
      }
      else
         return i * factorial(i - 1);
   }

int test()
{
   constexpr int f = factorial(4);

   return f == 24 ? 0 : 1;
}

}
