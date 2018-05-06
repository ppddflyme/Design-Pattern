#pragma once
#include "Observer.h"
class ConcreteObserver2 :
    public Observer
{
public:
    ConcreteObserver2();
    ~ConcreteObserver2();

    virtual void update(std::string msg) override;

};

