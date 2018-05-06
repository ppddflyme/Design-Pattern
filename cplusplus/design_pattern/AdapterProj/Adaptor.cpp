#include "stdafx.h"
#include "Adaptor.h"


Adaptor::Adaptor()
{
}


Adaptor::~Adaptor()
{
}

void Adaptor::sayHello()
{
    std::cout << "void Adaptor::sayHello()" << std::endl;
}

void Adaptor::sayHi()
{
    Adaptee::sayHi();
}
