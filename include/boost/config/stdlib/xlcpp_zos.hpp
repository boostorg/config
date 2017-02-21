//  Copyright (c) 2017 Dynatrace
//
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt

//  See http://www.boost.org for most recent version.

//  Standard library setup for IBM z/OS XL C/C++ compiler.

// Oldest library version currently supported is 2.1 (V2R1)
#if __TARGET_LIB__ < 0x42010000
#  error "Library version not supported or configured - please reconfigure"
#endif

#if __TARGET_LIB__ > 0x42010000
#  if defined(BOOST_ASSERT_CONFIG)
#     error "Unknown library version - please run the configure tests and report the results"
#  endif
#endif

#define BOOST_STDLIB "IBM z/OS XL C/C++ standard library"

#define BOOST_HAS_MACRO_USE_FACET

// Unfortunately the IBM z/OS XL C/C++ standard library has a bug when it comes to locales...
// The locale-enabled overloads of functions like std::isdigit or std::tolower in <locale> are defined in a nested namespace and pulled into "std" via "using namespace xyz;". 
// The classic C versions of those functions are defined in the global namespace, and then pulled into "std" via "using ::functionname;" in <cctype>.
// This causes problems when including both <locale> and <cctype>, because the compiler will stop looking after it finds a function that was pulled in via "using ::functionname;"
// (which is correct behavior as far as the compiler is concerned).
// I.e. you cannot call a locale-enabled overload of one of those functions if both <locale> and <cctype> were included.
// To deal with this we have to define at least BOOST_DATE_TIME_NO_LOCALE (possibly others?), even though there - theoretically - *is* support for locales.
#define BOOST_DATE_TIME_NO_LOCALE

#define BOOST_NO_CXX11_HDR_TYPE_TRAITS
#define BOOST_NO_CXX11_HDR_INITIALIZER_LIST

#define BOOST_NO_CXX11_ADDRESSOF
#define BOOST_NO_CXX11_SMART_PTR
#define BOOST_NO_CXX11_ATOMIC_SMART_PTR
#define BOOST_NO_CXX11_NUMERIC_LIMITS
#define BOOST_NO_CXX11_ALLOCATOR
#define BOOST_NO_CXX11_HDR_FUNCTIONAL
#define BOOST_NO_CXX11_HDR_UNORDERED_SET
#define BOOST_NO_CXX11_HDR_UNORDERED_MAP
#define BOOST_NO_CXX11_HDR_TYPEINDEX
#define BOOST_NO_CXX11_HDR_TUPLE
#define BOOST_NO_CXX11_HDR_THREAD
#define BOOST_NO_CXX11_HDR_SYSTEM_ERROR
#define BOOST_NO_CXX11_HDR_REGEX
#define BOOST_NO_CXX11_HDR_RATIO
#define BOOST_NO_CXX11_HDR_RANDOM
#define BOOST_NO_CXX11_HDR_MUTEX
#define BOOST_NO_CXX11_HDR_FUTURE
#define BOOST_NO_CXX11_HDR_FORWARD_LIST
#define BOOST_NO_CXX11_HDR_CONDITION_VARIABLE
#define BOOST_NO_CXX11_HDR_CODECVT
#define BOOST_NO_CXX11_HDR_CHRONO
#define BOOST_NO_CXX11_HDR_ATOMIC
#define BOOST_NO_CXX11_HDR_ARRAY
#define BOOST_NO_CXX11_STD_ALIGN

#define BOOST_NO_CXX14_STD_EXCHANGE
#define BOOST_NO_CXX14_HDR_SHARED_MUTEX

#define BOOST_NO_CXX17_STD_INVOKE
#define BOOST_NO_CXX17_STD_APPLY
