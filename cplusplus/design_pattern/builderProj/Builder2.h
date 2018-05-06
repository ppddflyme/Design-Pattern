#pragma once
#include "IBuilder.h"
class Builder2 :
    public IBuilder
{
public:
    Builder2();
    ~Builder2();
    Builder2(std::shared_ptr<IBuilderProduct> product);
    virtual void createPart1();
    virtual void createPart2();
};

