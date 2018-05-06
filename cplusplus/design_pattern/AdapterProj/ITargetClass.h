#pragma once
class ITargetClass
{
public:
    ITargetClass();
    virtual ~ITargetClass();
    virtual void sayHi() = 0;
    virtual void sayHello() = 0;
};

