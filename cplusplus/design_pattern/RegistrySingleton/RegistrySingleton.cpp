// RegistrySingleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RegSingleton.h"
#include "RegSingletonChild.h"

//static RegSingletonChild instance;
int main()
{
    //std::shared_ptr<RegSingletonChild> instance(new RegSingletonChild());
    std::shared_ptr<RegSingleton> regInstance = RegSingleton::getInstance("RegSingleton");
    // std::shared_ptr<RegSingleton> regInstance = RegSingleton::getInstance("RegSingletonChild");
    regInstance->sayHi();
    std::shared_ptr<RegSingleton> regChildInstance = RegSingleton::getInstance("RegSingletonChild");
    regChildInstance->sayHi();
    return 0;
}

