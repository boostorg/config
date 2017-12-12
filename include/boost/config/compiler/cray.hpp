//  (C) Copyright John Maddock 2011.
//  (C) Copyright Cray, Inc. 2013 - 2017.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

// Cray C++ compiler setup.
//
// There are a few parameters that affect the macros defined in this file:
//
// - What version of CCE (Cray Compiling Environment) are we running? This
//   comes from the '_RELEASE_MAJOR', '_RELEASE_MINOR', and
//   '_RELEASE_PATCHLEVEL' macros.
// - What C++ standards conformance level are we using (e.g. '-h
//   std=c++14')? This comes from the '__cplusplus' macro.
// - Are we using GCC extensions ('-h gnu' or '-h nognu')? If we have '-h
//   gnu' then CCE emulates GCC, and the macros '__GNUC__',
//   '__GNUC_MINOR__', and '__GNUC_PATCHLEVEL__' are defined.
//
// This file is organized as follows:
//
// - Verify that the combination of parameters listed above is supported.
//   If we have an unsupported combination, we abort with '#error'.
// - Establish baseline values for all Boost macros.
// - Apply changes to the baseline macros based on compiler version. These
//   changes are cummulative so each version section only describes the
//   changes since the previous version.
//   - Within each version section, we may also apply changes based on
//     other parameters (i.e. C++ standards conformance level and GCC
//     extensions).

////
//// Front matter
////

#define BOOST_CRAY_VERSION (_RELEASE_MAJOR * 10000 + _RELEASE_MINOR * 100 + _RELEASE_PATCHLEVEL)

#ifdef __GNUC__
#   define BOOST_GCC_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#endif

#ifndef BOOST_COMPILER
#   define BOOST_COMPILER "Cray C++ version " BOOST_STRINGIZE(_RELEASE_MAJOR) "." BOOST_STRINGIZE(_RELEASE_MINOR) "." BOOST_STRINGIZE(_RELEASE_PATCHLEVEL)
#endif

// We have to emulate some GCC macros in order to enable some Boost.Config
// tests.

#if __cplusplus >= 201103L && defined(__GNUC__) && !defined(__GXX_EXPERIMENTAL_CXX0X__)
#   define __GXX_EXPERIMENTAL_CXX0X__
#endif // __GNUC__

////
//// Parameter validation
////

// FIXME: Do we really need to support compilers before 8.5? Do they pass
// the Boost.Config tests?

#if BOOST_CRAY_VERSION < 80000
#  error "Boost is not configured for Cray compilers prior to version 8, please try the configure script."
#endif

// We only support recent EDG based compilers.

#ifndef __EDG__
#  error "Unsupported Cray compiler, please try running the configure script."
#endif

////
//// Baseline values
////

#include <boost/config/compiler/common_edg.hpp>

#define BOOST_HAS_NRVO
#define BOOST_NO_COMPLETE_VALUE_INITIALIZATION
#define BOOST_NO_CXX11_AUTO_DECLARATIONS
#define BOOST_NO_CXX11_AUTO_MULTIDECLARATIONS
#define BOOST_NO_CXX11_CHAR16_T
#define BOOST_NO_CXX11_CHAR32_T
#define BOOST_NO_CXX11_CONSTEXPR
#define BOOST_NO_CXX11_DECLTYPE
#define BOOST_NO_CXX11_DECLTYPE_N3276
#define BOOST_NO_CXX11_DEFAULTED_FUNCTIONS
#define BOOST_NO_CXX11_DELETED_FUNCTIONS
#define BOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#define BOOST_NO_CXX11_FINAL
#define BOOST_NO_CXX11_FUNCTION_TEMPLATE_DEFAULT_ARGS
#define BOOST_NO_CXX11_LAMBDAS
#define BOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#define BOOST_NO_CXX11_NOEXCEPT
#define BOOST_NO_CXX11_NULLPTR
#define BOOST_NO_CXX11_RANGE_BASED_FOR
#define BOOST_NO_CXX11_RAW_LITERALS
#define BOOST_NO_CXX11_REF_QUALIFIERS
#define BOOST_NO_CXX11_RVALUE_REFERENCES
#define BOOST_NO_CXX11_SCOPED_ENUMS
#define BOOST_NO_CXX11_SFINAE_EXPR
#define BOOST_NO_CXX11_STATIC_ASSERT
#define BOOST_NO_CXX11_TEMPLATE_ALIASES
#define BOOST_NO_CXX11_THREAD_LOCAL
#define BOOST_NO_CXX11_UNICODE_LITERALS
#define BOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX
#define BOOST_NO_CXX11_USER_DEFINED_LITERALS
#define BOOST_NO_CXX11_VARIADIC_MACROS
#define BOOST_NO_CXX11_VARIADIC_TEMPLATES
#define BOOST_NO_SFINAE_EXPR
#define BOOST_NO_TWO_PHASE_NAME_LOOKUP

//#define BOOST_BCB_PARTIAL_SPECIALIZATION_BUG
#define BOOST_MATH_DISABLE_STD_FPCLASSIFY
//#define BOOST_HAS_FPCLASSIFY

#define BOOST_SP_USE_PTHREADS 
#define BOOST_AC_USE_PTHREADS 

//
// Everything that follows is working around what are thought to be
// compiler shortcomings. Revist all of these regularly.
//

//#define BOOST_USE_ENUM_STATIC_ASSERT
//#define BOOST_BUGGY_INTEGRAL_CONSTANT_EXPRESSIONS //(this may be implied by the previous #define

// These constants should be provided by the compiler.

#ifndef __ATOMIC_RELAXED
#define __ATOMIC_RELAXED 0
#define __ATOMIC_CONSUME 1
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_SEQ_CST 5
#endif

////
//// Version changes
////

//
// 8.5.0
//

#if BOOST_CRAY_VERSION >= 80500

#if __cplusplus >= 201103L

#undef BOOST_HAS_NRVO
#undef BOOST_NO_COMPLETE_VALUE_INITIALIZATION
#undef BOOST_NO_CXX11_AUTO_DECLARATIONS
#undef BOOST_NO_CXX11_AUTO_MULTIDECLARATIONS
#undef BOOST_NO_CXX11_CHAR16_T
#undef BOOST_NO_CXX11_CHAR32_T
#undef BOOST_NO_CXX11_CONSTEXPR
#undef BOOST_NO_CXX11_DECLTYPE
#undef BOOST_NO_CXX11_DECLTYPE_N3276
#undef BOOST_NO_CXX11_DEFAULTED_FUNCTIONS
#undef BOOST_NO_CXX11_DELETED_FUNCTIONS
#undef BOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#undef BOOST_NO_CXX11_FINAL
#undef BOOST_NO_CXX11_FUNCTION_TEMPLATE_DEFAULT_ARGS
#undef BOOST_NO_CXX11_LAMBDAS
#undef BOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#undef BOOST_NO_CXX11_NOEXCEPT
#undef BOOST_NO_CXX11_NULLPTR
#undef BOOST_NO_CXX11_RANGE_BASED_FOR
#undef BOOST_NO_CXX11_RAW_LITERALS
#undef BOOST_NO_CXX11_REF_QUALIFIERS
#undef BOOST_NO_CXX11_RVALUE_REFERENCES
#undef BOOST_NO_CXX11_SCOPED_ENUMS
#undef BOOST_NO_CXX11_SFINAE_EXPR
#undef BOOST_NO_CXX11_STATIC_ASSERT
#undef BOOST_NO_CXX11_TEMPLATE_ALIASES
#undef BOOST_NO_CXX11_THREAD_LOCAL
#undef BOOST_NO_CXX11_UNICODE_LITERALS
#undef BOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX
#undef BOOST_NO_CXX11_USER_DEFINED_LITERALS
#undef BOOST_NO_CXX11_VARIADIC_MACROS
#undef BOOST_NO_CXX11_VARIADIC_TEMPLATES
#undef BOOST_NO_SFINAE_EXPR
#undef BOOST_NO_TWO_PHASE_NAME_LOOKUP
#undef BOOST_MATH_DISABLE_STD_FPCLASSIFY
#undef BOOST_SP_USE_PTHREADS 
#undef BOOST_AC_USE_PTHREADS 

#define BOOST_HAS_VARIADIC_TMPL
#define BOOST_HAS_UNISTD_H
#define BOOST_HAS_TR1_COMPLEX_INVERSE_TRIG
#define BOOST_HAS_TR1_COMPLEX_OVERLOADS
#define BOOST_HAS_STDINT_H
#define BOOST_HAS_STATIC_ASSERT
#define BOOST_HAS_SIGACTION
#define BOOST_HAS_SCHED_YIELD
#define BOOST_HAS_RVALUE_REFS
#define BOOST_HAS_PTHREADS
#define BOOST_HAS_PTHREAD_YIELD
#define BOOST_HAS_PTHREAD_MUTEXATTR_SETTYPE
#define BOOST_HAS_PARTIAL_STD_ALLOCATOR
#define BOOST_HAS_NRVO
#define BOOST_HAS_NL_TYPES_H
#define BOOST_HAS_NANOSLEEP
#define BOOST_NO_CXX11_SMART_PTR
#define BOOST_NO_CXX11_HDR_FUNCTIONAL
#define BOOST_NO_CXX14_CONSTEXPR
#define BOOST_HAS_LONG_LONG
#define BOOST_HAS_FLOAT128

#if __cplusplus < 201402L
#define BOOST_NO_CXX11_DECLTYPE_N3276
#endif // __cplusplus < 201402L

#endif // __cplusplus >= 201103L

#endif // BOOST_CRAY_VERSION >= 80500

//
// 8.6.5
//

#if BOOST_CRAY_VERSION >= 80605

#if __cplusplus == 201402L
#define BOOST_NO_CXX11_HDR_ATOMIC
#define BOOST_NO_CXX11_HDR_REGEX
#define BOOST_NO_CXX11_HDR_TYPEINDEX
#define BOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#define BOOST_NO_CXX14_DIGIT_SEPARATORS
#define BOOST_NO_COMPLETE_VALUE_INITIALIZATION
#define BOOST_NO_TEMPLATE_TEMPLATES
#endif // __cplusplus == 201402L

#endif // BOOST_CRAY_VERSION >= 80605

////
//// Remove temporary macros
////

// I've commented out some '#undef' statements to signify that we purposely
// want to keep certain macros.

//#undef __GXX_EXPERIMENTAL_CXX0X__
//#undef BOOST_COMPILER
#undef BOOST_GCC_VERSION
#undef BOOST_CRAY_VERSION

