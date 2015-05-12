#ifndef PYTHONIC_BUILTIN_DICT_GET_HPP
#define PYTHONIC_BUILTIN_DICT_GET_HPP

#include "pythonic/utils/proxy.hpp"

#include "pythonic/types/dict.hpp"
#include "pythonic/types/none.hpp"
#include "pythonic/include/__builtin__/dict/get.hpp"

namespace pythonic
{

  namespace __builtin__
  {

    namespace dict
    {
      template <class K, class V, class W, class X>
      V get(types::dict<K, V> const &d, W const &k, X const &default_)
      {
        return d.get(k, default_);
      }
      template <class K, class V, class W>
      types::none<V> get(types::dict<K, V> const &d, W const &k)
      {
        return d.get(k);
      }
      template <class W, class X>
      X get(types::empty_dict const &, W const &, X const &default_)
      {
        return default_;
      }

      PROXY_IMPL(pythonic::__builtin__::dict, get);
    }
  }
}

#endif
