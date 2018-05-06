#pragma once
#include "IComponent_safety.h"
class LeafComponent_safety :
    public IComponent_safety
{
public:
    LeafComponent_safety();
    ~LeafComponent_safety();

    virtual void displayClassName() override;

};

