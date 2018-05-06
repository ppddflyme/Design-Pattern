#include "stdafx.h"
#include "Creator2.h"
#include "Product2.h"
#include <iostream>
using std::cout;
using std::endl;


Creator2::Creator2()
{
    cout << "Creator2::Creator2()" << endl;
}


Creator2::~Creator2()
{
    cout << "Creator2::~Creator2()" << endl;
}

shared_ptr<IProduct> Creator2::factory()
{
    return shared_ptr<IProduct>(new Product2());
}
