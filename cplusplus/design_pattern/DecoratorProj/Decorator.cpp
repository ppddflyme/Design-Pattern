#include "stdafx.h"
#include "Decorator.h"


Decorator::Decorator()
{
}

Decorator::Decorator(std::shared_ptr<IComponent> component) : m_component(component)
{
}


Decorator::~Decorator()
{
}

void Decorator::showName()
{
    m_component->showName();
}
