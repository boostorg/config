//  boost/config/cpp/unordered_multiset.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_UNORDERED_MULTISET_HPP)
#define BOOST_CONFIG_CPP_UNORDERED_MULTISET_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_UNORDERED_SET)
#define BOOST_CPP_HAS_UNORDERED_MULTISET 0
#define BOOST_CPP_UNORDERED_MULTISET_NS boost
#define BOOST_CPP_UNORDERED_MULTISET_HDR <boost/unordered_set.hpp>
#else
#define BOOST_CPP_HAS_UNORDERED_MULTISET 1
#define BOOST_CPP_UNORDERED_MULTISET_NS std
#define BOOST_CPP_UNORDERED_MULTISET_HDR <unordered_set>
#endif

#endif // !defined(BOOST_CONFIG_CPP_UNORDERED_MULTISET_HPP)
