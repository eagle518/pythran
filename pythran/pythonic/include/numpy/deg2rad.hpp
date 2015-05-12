#ifndef PYTHONIC_INCLUDE_NUMPY_DEG2RAD_HPP
#define PYTHONIC_INCLUDE_NUMPY_DEG2RAD_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/numexpr_to_ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"
#include <nt2/include/functions/inrad.hpp>

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME deg2rad
#define NUMPY_NARY_FUNC_SYM nt2::inrad
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
