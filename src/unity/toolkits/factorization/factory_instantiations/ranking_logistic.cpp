/* Copyright © 2017 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
#include <unity/toolkits/factorization/model_factory.hpp>

// This macro instantiates all permutations of the loss and solver class.

_INSTANTIATE_LOSS_AND_SOLVER(loss_logistic, factorization::explicit_ranking_sgd_solver);
