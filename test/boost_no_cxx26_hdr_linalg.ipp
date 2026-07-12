//  (C) Copyright John Maddock 2026.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  MACRO:         BOOST_NO_CXX26_HDR_LINALG
//  TITLE:         <linalg>
//  DESCRIPTION:   The platform supports the <linalg> header.

#include <linalg>

namespace boost_no_cxx26_hdr_linalg {

int test()
{
    using std::linalg::column_major_t;
    using std::linalg::column_major;
    using std::linalg::row_major_t;
    using std::linalg::row_major;
    using std::linalg::upper_triangle_t;
    using std::linalg::upper_triangle;
    using std::linalg::lower_triangle_t;
    using std::linalg::lower_triangle;
    using std::linalg::implicit_unit_diagonal_t;
    using std::linalg::implicit_unit_diagonal;
    using std::linalg::explicit_diagonal_t;
    using std::linalg::explicit_diagonal;
    using std::linalg::layout_blas_packed;
    using std::linalg::scaled_accessor;
    using std::linalg::scaled;
    using std::linalg::conjugated_accessor;
    using std::linalg::conjugated;
    using std::linalg::layout_transpose;
    using std::linalg::transposed;
    using std::linalg::conjugate_transposed;
    using std::linalg::setup_givens_rotation_result;
    using std::linalg::apply_givens_rotation;
    using std::linalg::swap_elements;
    using std::linalg::scale;
    using std::linalg::copy;
    using std::linalg::add;
    using std::linalg::dot;
    using std::linalg::dotc;
    using std::linalg::sum_of_squares_result;
    using std::linalg::vector_two_norm;
    using std::linalg::vector_abs_sum;
    using std::linalg::vector_idx_abs_max;
    using std::linalg::matrix_frob_norm;
    using std::linalg::matrix_one_norm;
    using std::linalg::matrix_inf_norm;
    using std::linalg::matrix_vector_product;
    using std::linalg::symmetric_matrix_vector_product;
    using std::linalg::hermitian_matrix_vector_product;
    using std::linalg::triangular_matrix_vector_product;
    using std::linalg::triangular_matrix_vector_solve;
    using std::linalg::matrix_rank_1_update;
    using std::linalg::hermitian_matrix_rank_1_update;
    using std::linalg::symmetric_matrix_rank_2_update;
    using std::linalg::matrix_product;
    using std::linalg::symmetric_matrix_product;
    using std::linalg::hermitian_matrix_product;
    using std::linalg::triangular_matrix_product;
    using std::linalg::triangular_matrix_right_product;
    using std::linalg::symmetric_matrix_rank_k_update;
    using std::linalg::hermitian_matrix_rank_k_update;
    using std::linalg::symmetric_matrix_rank_2k_update;
    using std::linalg::triangular_matrix_matrix_left_solve;
    using std::linalg::triangular_matrix_matrix_right_solve;
    return 0;
}

}  //namespace boost_no_cxx26_hdr_linalg {

