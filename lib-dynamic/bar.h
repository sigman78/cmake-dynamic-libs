#pragma once

#include "bar-forward.h"

#include "detail.h"

namespace bar {

// inherit EXPORTED class from non EXPORTED results MSVC warning:
// warning C4275: non dll-interface struct 'bar::detail' used as base for dll-interface struct 'bar::some'
struct some: public detail {
  some();
  virtual ~some();
  
  struct inner {
      inner();
  };

  static int field;
};

}
