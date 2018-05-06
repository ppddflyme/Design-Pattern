#pragma once
#include "IFruit.h"
class Banane :
    public IFruit
{
public:
    Banane();
    ~Banane();
    virtual void displayFruitName() const;
};

