//  boost/config/cpp/function.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_FUNCTION_HPP)
#define BOOST_CONFIG_CPP_FUNCTION_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_FUNCTIONAL)
#define BOOST_CPP_HAS_FUNCTION 0
#define BOOST_CPP_FUNCTION_NS boost
#define BOOST_CPP_FUNCTION_HDR <boost/function.hpp>
#else
#define BOOST_CPP_HAS_FUNCTION 1
#define BOOST_CPP_FUNCTION_NS std
#define BOOST_CPP_FUNCTION_HDR <functional>
#endif

#endif // !defined(BOOST_CONFIG_CPP_FUNCTION_HPP)
