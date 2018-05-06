#pragma once
#include "Implementor.h"
class ConcreteImplementor :
    public Implementor
{
public:
    ConcreteImplementor();
    ~ConcreteImplementor();

    virtual void operationImp() override;

};

