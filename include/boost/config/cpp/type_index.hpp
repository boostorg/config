//  boost/config/cpp/type_index.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_TYPE_INDEX_HPP)
#define BOOST_CONFIG_CPP_TYPE_INDEX_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_TYPEINDEX)
#define BOOST_CPP_HAS_TYPE_INDEX 0
#define BOOST_CPP_TYPE_INDEX_NS boost::typeindex
#define BOOST_CPP_TYPE_INDEX_HDR <boost/type_index.hpp>
#else
#define BOOST_CPP_HAS_TYPE_INDEX 1
#define BOOST_CPP_TYPE_INDEX_NS std
#define BOOST_CPP_TYPE_INDEX_HDR <typeindex>
#endif

#endif // !defined(BOOST_CONFIG_CPP_TYPE_INDEX_HPP)
