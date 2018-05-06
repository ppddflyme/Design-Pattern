#pragma once
#include "IBuilderProduct.h"
class BuilderProduct2 :
    public IBuilderProduct
{
public:
    BuilderProduct2();
    ~BuilderProduct2();
    virtual void product_part1();
    virtual void product_part2();
};

