//  boost/config/cpp/type_traits.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_TYPE_TRAITS_HPP)
#define BOOST_CONFIG_CPP_TYPE_TRAITS_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_TYPE_TRAITS)
#define BOOST_CPP_HAS_TYPE_TRAITS 0
#define BOOST_CPP_TYPE_TRAITS_NS boost
#define BOOST_CPP_TYPE_TRAITS_HDR <boost/type_traits.hpp>
#else
#define BOOST_CPP_HAS_TYPE_TRAITS 1
#define BOOST_CPP_TYPE_TRAITS_NS std
#define BOOST_CPP_TYPE_TRAITS_HDR <type_traits>
#endif

#endif // !defined(BOOST_CONFIG_CPP_TYPE_TRAITS_HPP)
