// singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SingletonClass.h"


int main()
{
    SingletonClass instance = SingletonClass::getInstance();
    instance.sayHi();
    return 0;
}

