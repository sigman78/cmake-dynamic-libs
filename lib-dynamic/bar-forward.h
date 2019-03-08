#pragma once

#include "libdynamic_export.h"

namespace bar {

struct LIBDYNAMIC_EXPORT some;

}

// mark dependant static lib symbol as exported
namespace foo {

struct LIBDYNAMIC_EXPORT other;

}