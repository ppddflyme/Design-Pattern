#pragma once
#include "IFruit.h"
class Apple :
    public IFruit
{
public:
    Apple();
    ~Apple();
    virtual void displayFruitName() const;
};

