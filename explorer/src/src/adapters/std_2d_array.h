/*
 *   Copyright (c) 2007 John Weaver
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#if !defined(_MUNKRES_ADAPTERS_STD_2D_ARRAY_H_)
#define _MUNKRES_ADAPTERS_STD_2D_ARRAY_H_

#include "matrix.h"
#include <array>

// Set of functions for two-dimensional std::array.
template <typename T, const unsigned int dimention>
Matrix<T> convert_std_2d_array_to_munkres_matrix(
    const std::array<std::array<T, dimention>, dimention> &array);

template <typename T, const unsigned int dimention>
void fill_std_2d_array_from_munkres_matrix(
    std::array<std::array<T, dimention>, dimention> &array,
    const Matrix<T> &matrix);

template <const unsigned int dimension>
void solve(std::array<std::array<double, dimension>, dimension> &m);

#ifndef USE_EXPORT_KEYWORD
#include "std_2d_array.cpp"
//#define export /*export*/
#endif

#endif /* !defined(_MUNKRES_ADAPTERS_STD_2D_ARRAY_H_) */
