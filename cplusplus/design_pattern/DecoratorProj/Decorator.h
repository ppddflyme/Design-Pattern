#pragma once
#include "IComponent.h"
class Decorator :
    public IComponent
{
private:
    std::shared_ptr<IComponent> m_component;
public:
    Decorator();
    Decorator(std::shared_ptr<IComponent> component);
    virtual ~Decorator();

    virtual void showName() override;

};

