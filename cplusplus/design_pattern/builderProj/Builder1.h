#pragma once
#include "IBuilder.h"
class Builder1 :
    public IBuilder
{
public:
    Builder1();
    ~Builder1();
    virtual void createPart1();
    virtual void createPart2();
    Builder1(std::shared_ptr<IBuilderProduct> product);
};

