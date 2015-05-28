//  boost/config/cpp/hash.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_HASH_HPP)
#define BOOST_CONFIG_CPP_HASH_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_FUNCTIONAL)
#define BOOST_CPP_HAS_HASH 0
#define BOOST_CPP_HASH_NS boost
#define BOOST_CPP_HASH_HDR <boost/functional/hash.hpp>
#else
#define BOOST_CPP_HAS_HASH 1
#define BOOST_CPP_HASH_NS std
#define BOOST_CPP_HASH_HDR <functional>
#endif

#endif // !defined(BOOST_CONFIG_CPP_HASH_HPP)
