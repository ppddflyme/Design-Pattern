#include "stdafx.h"
#include "ConcreteHandler2.h"


ConcreteHandler2::ConcreteHandler2()
{
}


ConcreteHandler2::~ConcreteHandler2()
{
}

void ConcreteHandler2::handler()
{
    if (getHandler() != NULL)
        getHandler()->handler();
    else
        std::cout << "ConcreteHandler2::handler()" << std::endl;
}
