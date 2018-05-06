#pragma once
#include "Observer.h"
class ConcreteObserver1 :
    public Observer
{
public:
    ConcreteObserver1();
    ~ConcreteObserver1();

    virtual void update(std::string msg) override;

};

