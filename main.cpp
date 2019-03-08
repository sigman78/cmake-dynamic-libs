#include <iostream>
#include "bar.h"

#include "foo.h"

int main()
{
    bar::some* s = new bar::some();
    delete s;

    // access statics
    bar::some::field = 123;

    // access crossreferenced library symbol (DOES WORK with export/all)
    foo::other ot;
        
    return 0;
}
