#include "p3_table_ice_impl.hpp"

namespace scream {
namespace p3 {

/*
 * Explicit instantiation for doing ice table functions on Reals using the
 * default device.
 */

template struct Functions<Real,DefaultDevice>;

} // namespace p3
} // namespace scream