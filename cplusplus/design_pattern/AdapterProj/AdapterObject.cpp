#include "stdafx.h"
#include "AdapterObject.h"


AdapterObject::AdapterObject()
{
}

AdapterObject::AdapterObject(const AdapterObject & that)
{
    *this = that;
}


AdapterObject::~AdapterObject()
{
}


void AdapterObject::sayHi()
{
    std::cout << "void AdapterObject::sayHi()" << std::endl;
}
