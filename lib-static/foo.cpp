#include <iostream>
#include "foo.h"

namespace foo {

int var = 1;

other::other() {
    std::cout << "other()\n";
}

other::~other() {
    std::cout << "~other()\n";
}


}
