#pragma once
#include "Strategy.h"
class ConcreteStragety1 : public Strategy
{
public:
    ConcreteStragety1();
    ~ConcreteStragety1();

    virtual void operation() override;

};

