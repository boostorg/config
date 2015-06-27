//  boost/config/cpp/thread.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_THREAD_HPP)
#define BOOST_CONFIG_CPP_THREAD_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_THREAD)
#define BOOST_CPP_HAS_THREAD 0
#define BOOST_CPP_THREAD_NS boost
#define BOOST_CPP_THREAD_HDR <boost/thread/thread.hpp>
#else
#define BOOST_CPP_HAS_THREAD 1
#define BOOST_CPP_THREAD_NS std
#define BOOST_CPP_THREAD_HDR <thread>
#endif

#endif // !defined(BOOST_CONFIG_CPP_THREAD_HPP)
