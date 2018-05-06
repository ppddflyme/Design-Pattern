#pragma once
#include "RegSingleton.h"
class RegSingletonChild :
    public RegSingleton
{
public:
    RegSingletonChild();
    ~RegSingletonChild();
    virtual void sayHi();
    static std::shared_ptr<RegSingleton> getInstance();
};

