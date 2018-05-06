#include "stdafx.h"
#include "ConcreteHandler1.h"


ConcreteHandler1::ConcreteHandler1()
{
}


ConcreteHandler1::~ConcreteHandler1()
{
}

void ConcreteHandler1::handler()
{
    if (getHandler() != NULL)
        getHandler()->handler();
    else
        std::cout << "ConcreteHandler1::handler()" << std::endl;
}
