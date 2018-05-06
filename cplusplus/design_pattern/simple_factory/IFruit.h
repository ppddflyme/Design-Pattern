#pragma once
class IFruit
{
public:
    IFruit();
    virtual ~IFruit();
    virtual void displayFruitName() const = 0;
};

