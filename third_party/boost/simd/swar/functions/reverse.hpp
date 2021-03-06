//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef BOOST_SIMD_SWAR_FUNCTIONS_REVERSE_HPP_INCLUDED
#define BOOST_SIMD_SWAR_FUNCTIONS_REVERSE_HPP_INCLUDED
#include <boost/simd/include/functor.hpp>
#include <boost/dispatch/include/functor.hpp>


namespace boost { namespace simd { namespace tag
  {
   /*!
     @brief reverse generic tag

     Represents the reverse function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct reverse_ : ext::unspecified_<reverse_>
    {
      /// @brief Parent hierarchy
      typedef ext::unspecified_<reverse_> parent;
    };
  }
  /*!
    returns a vector the elements of which are
    those of a0 in reverse order

    @par Semantic:

    For every parameter of type T0

    @code
    T0 r = reverse(a0);
    @endcode

    is similar to:

    @code
    T0 r = ;
    for(size_t i=0;i<cardinal_of<T0>;++i)
    r[i] = a0[cardinal_of<T0>-i-1];
    @endcode

    @param a0

    @return a value of the same type as the parameter
  **/
  BOOST_DISPATCH_FUNCTION_IMPLEMENTATION(tag::reverse_, reverse, 1)
} }

#endif
