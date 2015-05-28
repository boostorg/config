//  boost/config/cpp/bind.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_BIND_HPP)
#define BOOST_CONFIG_CPP_BIND_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_FUNCTIONAL)
#define BOOST_CPP_HAS_BIND 0
#define BOOST_CPP_BIND_NS boost
#define BOOST_CPP_BIND_HDR <boost/bind/bind.hpp>
#else
#define BOOST_CPP_HAS_BIND 1
#define BOOST_CPP_BIND_NS std
#define BOOST_CPP_BIND_HDR <functional>
#endif

#endif // !defined(BOOST_CONFIG_CPP_BIND_HPP)
