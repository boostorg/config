//  boost/config/cpp/tuple.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_TUPLE_HPP)
#define BOOST_CONFIG_CPP_TUPLE_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_TUPLE)
#define BOOST_CPP_HAS_TUPLE 0
#define BOOST_CPP_TUPLE_NS boost
#define BOOST_CPP_TUPLE_HDR <boost/tuple/tuple.hpp>
#else
#define BOOST_CPP_HAS_TUPLE 1
#define BOOST_CPP_TUPLE_NS std
#define BOOST_CPP_TUPLE_HDR <tuple>
#endif

#endif // !defined(BOOST_CONFIG_CPP_TUPLE_HPP)
