#include "stdafx.h"
#include "ConcreteDecorator.h"


ConcreteDecorator::ConcreteDecorator()
{
}

ConcreteDecorator::ConcreteDecorator(std::shared_ptr<IComponent> component):Decorator(component)
{
}


ConcreteDecorator::~ConcreteDecorator()
{
}

void ConcreteDecorator::showName()
{
    Decorator::showName();
    std::cout << "ConcreteDecorator::showName()" << std::endl;
}
