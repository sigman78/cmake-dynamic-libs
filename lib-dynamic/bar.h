#pragma once

#include "bar-forward.h"

#include "detail.h"

namespace bar {

struct some: public detail {
  some();
  virtual ~some();
  
  struct inner {
      inner();
  };

  static int field;
};

}
