#pragma once
#include "stdafx.h"

class IComponent_trans
{
public:
    IComponent_trans();
    virtual ~IComponent_trans();
    virtual void addChild(std::shared_ptr<IComponent_trans> child) = 0;
    virtual void deleteChild(std::shared_ptr<IComponent_trans> child) = 0;
    virtual void loopChilds() = 0;
    virtual void displayClassName() = 0;
};
