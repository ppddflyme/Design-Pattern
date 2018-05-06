// DecoratorProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IComponent.h"
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"
#include "ConcreteDecorator2.h"

int main()
{
    std::shared_ptr<IComponent> component = std::make_shared<ConcreteComponent>();
    std::shared_ptr<IComponent> concreteDecorator = std::make_shared<ConcreteDecorator>(component);
    std::shared_ptr<IComponent> concreteDecorator2 = std::make_shared<ConcreteDecorator2>(concreteDecorator);
    concreteDecorator2->showName();
    return 0;
}

