#include "stdafx.h"
#include "Creator1.h"
#include "Product1.h"
#include <iostream>
using std::cout;
using std::endl;


Creator1::Creator1()
{
    cout << "Creator1::Creator1()" << endl;
}


Creator1::~Creator1()
{
    cout << "Creator1::~Creator1()" << endl;
}

shared_ptr<IProduct> Creator1::factory()
{
    return shared_ptr<IProduct>(new Product1());
}
