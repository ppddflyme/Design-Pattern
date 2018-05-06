#include "stdafx.h"
#include "ConcreteFlyWeight.h"

ConcreteFlyWeight::ConcreteFlyWeight(std::string state) : internalState(state)
{
}

ConcreteFlyWeight::~ConcreteFlyWeight()
{
}

void ConcreteFlyWeight::operation(std::string str)
{
    std::cout << "internal: " << internalState.c_str() << ", external: " << str.c_str() << std::endl;
}
