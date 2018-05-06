#pragma once
class IComponent
{
public:
    IComponent();
    virtual ~IComponent();
    virtual void showName() = 0;
};

