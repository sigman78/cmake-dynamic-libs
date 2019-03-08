#include <iostream>
#include "bar.h"
#include "foo.h"

namespace bar {

some::some()
{
  std::cout << "some()" << foo::var << "\n";
}

some::~some()
{
  std::cout << "~some()\n";
}

some::inner::inner()
{
    std::cout << "inner()" << "\n";
}

int some::field = 2;

}
