#include "stdafx.h"
#include "Adapter2.h"


Adapter2::Adapter2()
{
}


Adapter2::~Adapter2()
{
}


void Adapter2::sayHi()
{
    myAdaptee.sayHi();
}


void Adapter2::sayHello()
{
    std::cout << "void Adapter2::sayHello()" << std::endl;
}


Adapter2::Adapter2(const AdapterObject & adaptee):myAdaptee(adaptee)
{
}
