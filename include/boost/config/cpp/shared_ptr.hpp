//  boost/config/cpp/shared_ptr.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_SHARED_PTR_HPP)
#define BOOST_CONFIG_CPP_SHARED_PTR_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_SMART_PTR)
#define BOOST_CPP_HAS_SHARED_PTR 0
#define BOOST_CPP_SHARED_PTR_NS boost
#define BOOST_CPP_SHARED_PTR_HDR <boost/shared_ptr.hpp>
#else
#define BOOST_CPP_HAS_SHARED_PTR 1
#define BOOST_CPP_SHARED_PTR_NS std
#define BOOST_CPP_SHARED_PTR_HDR <memory>
#endif

#endif // !defined(BOOST_CONFIG_CPP_SHARED_PTR_HPP)
