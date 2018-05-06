#pragma once
#include "IBuilderProduct.h"
class BuilderProduct1 :
    public IBuilderProduct
{
public:
    BuilderProduct1();
    BuilderProduct1(const BuilderProduct1 & that);
    ~BuilderProduct1();
    virtual void product_part1();
    virtual void product_part2();
};

