#include <iostream>
#include "detail.h"

namespace bar {

detail::detail()
{
    std::cout << "detail\n";
}

detail::~detail()
{
    std::cout << "~detail\n";
}

}
