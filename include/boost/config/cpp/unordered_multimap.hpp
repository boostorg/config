//  boost/config/cpp/unordered_multimap.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_UNORDERED_MULTIMAP_HPP)
#define BOOST_CONFIG_CPP_UNORDERED_MULTIMAP_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_UNORDERED_MAP)
#define BOOST_CPP_HAS_UNORDERED_MULTIMAP 0
#define BOOST_CPP_UNORDERED_MULTIMAP_NS boost
#define BOOST_CPP_UNORDERED_MULTIMAP_HDR <boost/unordered_map.hpp>
#else
#define BOOST_CPP_HAS_UNORDERED_MULTIMAP 1
#define BOOST_CPP_UNORDERED_MULTIMAP_NS std
#define BOOST_CPP_UNORDERED_MULTIMAP_HDR <unordered_map>
#endif

#endif // !defined(BOOST_CONFIG_CPP_UNORDERED_MULTIMAP_HPP)
