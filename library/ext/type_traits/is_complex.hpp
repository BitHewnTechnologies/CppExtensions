
#include <type_traits>
#include <complex>

namespace{
  template <typename T>
  struct extractType;

  template <template <typename ...> class C, typename D>
  struct extractType<C<D>>
   { using subType = D; };

};

namespace ext{

template <class T> struct is_complex :
  std::is_same
    < std::remove_cv_t<T>
    , typename std::complex<typename extractType<T>::subType>::value
    >
 {};
