//  boost/config/cpp/random.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_RANDOM_HPP)
#define BOOST_CONFIG_CPP_RANDOM_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_RANDOM)
#define BOOST_CPP_HAS_RANDOM 0
#define BOOST_CPP_RANDOM_NS boost
#define BOOST_CPP_RANDOM_HDR <boost/random.hpp>
#else
#define BOOST_CPP_HAS_RANDOM 1
#define BOOST_CPP_RANDOM_NS std
#define BOOST_CPP_RANDOM_HDR <random>
#endif

#endif // !defined(BOOST_CONFIG_CPP_RANDOM_HPP)
