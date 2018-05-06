#pragma once
#include "Strategy.h"
class ConcreteStragety2 :
    public Strategy
{
public:
    ConcreteStragety2();
    ~ConcreteStragety2();

    virtual void operation() override;

};

