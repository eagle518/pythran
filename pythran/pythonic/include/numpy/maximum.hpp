#ifndef PYTHONIC_INCLUDE_NUMPY_MAXIMUM_HPP
#define PYTHONIC_INCLUDE_NUMPY_MAXIMUM_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/types/numpy_broadcast.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

#include <nt2/include/functions/max.hpp>

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME maximum
#define NUMPY_NARY_FUNC_SYM nt2::max
#include "pythonic/include/types/numpy_nary_expr.hpp"
  }
}

#endif
