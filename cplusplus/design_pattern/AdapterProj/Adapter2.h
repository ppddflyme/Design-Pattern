#pragma once
#include "ITargetClass.h"
#include "AdapterObject.h"
class Adapter2 :
    public ITargetClass
{
public:
    Adapter2();
    ~Adapter2();
private:
//    Adapter2 myAdapter;
    AdapterObject myAdaptee;
public:
    virtual void sayHi();
    virtual void sayHello();
    Adapter2(const AdapterObject & adaptee);
};

