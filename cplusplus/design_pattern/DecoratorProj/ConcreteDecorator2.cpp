#include "stdafx.h"
#include "ConcreteDecorator2.h"


ConcreteDecorator2::ConcreteDecorator2()
{
}


ConcreteDecorator2::~ConcreteDecorator2()
{
}


void ConcreteDecorator2::showName()
{
    Decorator::showName();
    std::cout << "ConcreteDecorator2::showName()" << std::endl;
}


ConcreteDecorator2::ConcreteDecorator2(std::shared_ptr<IComponent> component):Decorator(component)
{
}
