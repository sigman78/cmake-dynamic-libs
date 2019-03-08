#include <iostream>
#include "bar.h"

int main()
{
    bar::some* s = new bar::some();
    delete s;

    bar::some::field = 123;
    
    return 0;
}
