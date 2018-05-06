#pragma once
#include "FlyWeight.h"
class ConcreteFlyWeight :
    public FlyWeight
{
private:
    std::string internalState;
public:
    ConcreteFlyWeight(std::string state);
    ~ConcreteFlyWeight();

    virtual void operation(std::string str) override;

};

