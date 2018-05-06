#include "stdafx.h"
#include <iostream>
#include "SingletonClass.h"
using std::cout;
using std::endl;

SingletonClass::SingletonClass()
{
}


SingletonClass::~SingletonClass()
{
}


SingletonClass & SingletonClass::getInstance()
{
    static SingletonClass instance;
    return instance;
}


void SingletonClass::sayHi()
{
    cout << "void SingletonClass::sayHi()" << endl;
}
