#ifndef BOOST_CONFIG_PRAGMA_MESSAGE_HPP_INCLUDED
#define BOOST_CONFIG_PRAGMA_MESSAGE_HPP_INCLUDED

//  Copyright 2017 Peter Dimov.
//
//  Distributed under the Boost Software License, Version 1.0.
//
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//  BOOST_PRAGMA_MESSAGE("message")

#if defined(__GNUC__)
#define BOOST_PRAGMA_MESSAGE_IMPL_1(x) _Pragma(#x)
#define BOOST_PRAGMA_MESSAGE(x) BOOST_PRAGMA_MESSAGE_IMPL_1(message(x))
#elif defined(_MSC_VER)
#define BOOST_PRAGMA_MESSAGE_IMPL_2(x, f, ln) __pragma(message(f "(" #ln "): note: " x))
#define BOOST_PRAGMA_MESSAGE_IMPL_1(x, f, ln) BOOST_PRAGMA_MESSAGE_IMPL_2(x, f, ln)
#define BOOST_PRAGMA_MESSAGE(x) BOOST_PRAGMA_MESSAGE_IMPL_1(x, __FILE__, __LINE__)
#else
#define BOOST_PRAGMA_MESSAGE(x)
#endif

#endif // BOOST_CONFIG_PRAGMA_MESSAGE_HPP_INCLUDED
