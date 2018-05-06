#include "stdafx.h"
#include "RefinedAbstractioin.h"


RefinedAbstractioin::RefinedAbstractioin()
{
}


RefinedAbstractioin::~RefinedAbstractioin()
{
}

RefinedAbstractioin::RefinedAbstractioin(std::shared_ptr<Implementor> impl):Abstraction(impl)
{
}

void RefinedAbstractioin::operation()
{
    std::cout << "RefinedAbstractioin::operation()" << std::endl;
    Abstraction::operation();
}
