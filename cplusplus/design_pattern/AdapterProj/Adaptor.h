#pragma once
#include "ITargetClass.h"
#include "Adaptee.h"
class Adaptor :
    public ITargetClass, public Adaptee
{
public:
    Adaptor();
    ~Adaptor();
    virtual void sayHello();
    virtual void sayHi();
};

