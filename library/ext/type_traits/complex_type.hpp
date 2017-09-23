
#include <type_traits>
#include <complex>
#include "Extensions/Traits/is_complex.hpp"

namespace{
  template <typename T>
  struct extractType;

  template <template <typename ...> class C, typename D>
  struct extractType<C<D>>
   { using subType = D; };

};

namespace ext{

template
  < typename T
  , typename std::enable_if<ext::is_complex<T>::value>::value
  >
struct complex_type
  { using value = typename extractType<T>::subType; };

};
