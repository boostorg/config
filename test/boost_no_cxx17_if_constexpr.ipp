/*
Copyright 2018 T. Zachary Laine
(whatwasthataddress@gmail.com)

Distributed under Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

// MACRO: BOOST_NO_CXX17_CONSTEXPR_IF
// TITLE: C++17 constexpr if
// DESCRIPTION: C++17 constexpr if are not supported.

#include <type_traits>

namespace boost_no_cxx17_constexpr_if {

int test()
{
    if constexpr (true) {
        if constexpr (1 != 0) {
            if constexpr (std::is_same<int, int>{}) {
                return 0;
            }
        }
    }
    return 1;
}
