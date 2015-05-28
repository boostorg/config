//  boost/config/cpp/atomic.hpp  ---------------------------------------------------//

//  (C) Copyright Edward Diener 2015. 
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_CONFIG_CPP_ATOMIC_HPP)
#define BOOST_CONFIG_CPP_ATOMIC_HPP

#include <boost/config.hpp>
#if defined(BOOST_NO_CXX11_HDR_ATOMIC)
#define BOOST_CPP_HAS_ATOMIC 0
#define BOOST_CPP_ATOMIC_NS boost
#define BOOST_CPP_ATOMIC_HDR <boost/atomic/atomic.hpp>
#define BOOST_CPP_ATOMIC_MACRO(macro) BOOST_ ## macro
#else
#define BOOST_CPP_HAS_ATOMIC 1
#define BOOST_CPP_ATOMIC_NS std
#define BOOST_CPP_ATOMIC_HDR <atomic>
#define BOOST_CPP_ATOMIC_MACRO(macro) macro
#endif

#endif // !defined(BOOST_CONFIG_CPP_ATOMIC_HPP)
