#pragma once
#include "Handler.h"
class ConcreteHandler2 :
    public Handler
{
public:
    ConcreteHandler2();
    ~ConcreteHandler2();

    virtual void handler() override;

};

