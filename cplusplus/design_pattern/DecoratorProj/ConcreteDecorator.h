#pragma once
#include "Decorator.h"
class ConcreteDecorator :
    public Decorator
{
public:
    ConcreteDecorator();
    ConcreteDecorator(std::shared_ptr<IComponent> component);
    ~ConcreteDecorator();
    void showName();
};

