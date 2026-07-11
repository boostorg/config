//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_SIMD
//  TITLE:         <simd>
//  DESCRIPTION:   The platform supports the <simd> header.

#include <linalg>

namespace boost_no_cxx26_hdr_simd {

int test()
{
    using std::simd::alignment;
    using std::simd::alignment_v;
    using std::simd::rebind;
    using std::simd::rebind_t;
    using std::simd::resize_t;
    using std::simd::flags;
    using std::simd::flag_default;
    using std::simd::flag_convert;
    using std::simd::flag_aligned;
    using std::simd::flag_overaligned;
    using std::simd::basic_vec;
    using std::simd::vec;
    using std::simd::reduce;
    using std::simd::reduce_min;
    using std::simd::reduce_max;
    using std::simd::unchecked_load;
    using std::simd::partial_load;
    using std::simd::unchecked_store;
    using std::simd::partial_store;
    using std::simd::zero_element;
    using std::simd::uninit_element;
    using std::simd::permute;
    using std::simd::compress;
    using std::simd::expand;
    using std::simd::unchecked_gather_from;
    using std::simd::partial_gather_from;
    using std::simd::unchecked_scatter_to;
    using std::simd::partial_scatter_to;
    using std::simd::chunk;
    using std::simd::cat;
    using std::simd::min;
    using std::simd::max;
    using std::simd::minmax;
    using std::simd::clamp;
    using std::simd::select;
    using std::simd::acos;
    using std::simd::asin;
    using std::simd::atan;
    using std::simd::atan2;
    using std::simd::cos;
    using std::simd::sin;
    using std::simd::tan;
    using std::simd::acosh;
    using std::simd::asinh;
    using std::simd::atanh;
    using std::simd::cosh;
    using std::simd::sinh;
    using std::simd::tanh;
    using std::simd::exp;
    using std::simd::exp2;
    using std::simd::expm1;
    using std::simd::frexp;
    using std::simd::ilogb;
    using std::simd::ldexp;
    using std::simd::log;
    using std::simd::log10;
    using std::simd::log1p;
    using std::simd::log2;
    using std::simd::logb;
    using std::simd::modf;
    using std::simd::scalbn;
    using std::simd::scalbln;
    using std::simd::cbrt;
    using std::simd::abs;
    using std::simd::fabs;
    using std::simd::hypot;
    using std::simd::pow;
    using std::simd::sqrt;
    using std::simd::erf;
    using std::simd::erfc;
    using std::simd::lgamma;
    using std::simd::tgamma;
    using std::simd::ceil;
    using std::simd::floor;
    using std::simd::nearbyint;
    using std::simd::rint;
    using std::simd::lrint;
    using std::simd::llrint;
    using std::simd::round;
    using std::simd::lround;
    using std::simd::trunc;
    using std::simd::fmod;
    using std::simd::remainder;
    using std::simd::remquo;
    using std::simd::copysign;
    using std::simd::nextafter;
    using std::simd::fdim;
    using std::simd::fmax;
    using std::simd::fmin;
    using std::simd::fma;
    using std::simd::lerp;
    using std::simd::fpclassify;
    using std::simd::isfinite;
    using std::simd::isinf;
    using std::simd::isnan;
    using std::simd::isnormal;
    using std::simd::signbit;
    using std::simd::isgreater;
    using std::simd::isgreaterequal;
    using std::simd::isless;
    using std::simd::islessequal;
    using std::simd::islessgreater;
    using std::simd::isunordered;
    using std::simd::assoc_laguerre;
    using std::simd::beta;
    using std::simd::comp_ellint_3;
    using std::simd::cyl_bessel_i;
    using std::simd::cyl_bessel_j;
    using std::simd::cyl_bessel_k;
    using std::simd::cyl_neumann;
    using std::simd::ellint_1;
    using std::simd::ellint_2;
    using std::simd::ellint_3;
    using std::simd::hermite;
    using std::simd::laguerre;
    using std::simd::sph_bessel;
    using std::simd::sph_legendre;
    using std::simd::sph_neumann;
    using std::simd::byteswap;
    using std::simd::bit_ceil;
    using std::simd::bit_floor;
    using std::simd::has_single_bit;
    using std::simd::rotl;
    using std::simd::rotr;
    using std::simd::bit_width;
    using std::simd::countl_zero;
    using std::simd::countl_one;
    using std::simd::countr_zero;
    using std::simd::countr_one;
    using std::simd::popcount;
    using std::simd::real;
    using std::simd::imag;
    using std::simd::abs;
    using std::simd::arg;
    using std::simd::norm;
    using std::simd::conj;
    using std::simd::proj;
    using std::simd::polar;
    using std::simd::all_of;
    using std::simd::any_of;
    using std::simd::none_of;
    using std::simd::reduce_count;
    using std::simd::reduce_min_index;
    using std::simd::reduce_max_index;
    using std::simd::all_of;
    using std::simd::any_of;
    using std::simd::none_of;
    using std::simd::reduce_count;
    using std::simd::reduce_min_index;
    using std::simd::reduce_max_index;
    return 0;
}

}  //namespace boost_no_cxx26_hdr_simd {

