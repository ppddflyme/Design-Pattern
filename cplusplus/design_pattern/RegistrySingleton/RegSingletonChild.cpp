#include "stdafx.h"
#include <iostream>
#include "RegSingletonChild.h"


RegSingletonChild::RegSingletonChild()
{
    std::cout << "RegSingletonChild::RegSingletonChild()" << std::endl;
    //RegSingleton::registry("RegSingletonChild", std::shared_ptr<RegSingleton>(this));
}


RegSingletonChild::~RegSingletonChild()
{
    std::cout << "RegSingletonChild::~RegSingletonChild()" << std::endl;
}


void RegSingletonChild::sayHi()
{
    std::cout << "RegSingletonChild::sayHi()" << std::endl;
}


std::shared_ptr<RegSingleton> RegSingletonChild::getInstance()
{
    return RegSingleton::getInstance("RegSingletonChild");
}
