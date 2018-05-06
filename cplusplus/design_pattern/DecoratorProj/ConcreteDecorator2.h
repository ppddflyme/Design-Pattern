#pragma once
#include "Decorator.h"
class ConcreteDecorator2 :
    public Decorator
{
public:
    ConcreteDecorator2();
    ~ConcreteDecorator2();
    void showName();
    ConcreteDecorator2(std::shared_ptr<IComponent> component);
};

