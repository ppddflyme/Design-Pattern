#pragma once
class IBuilderProduct
{
public:
    IBuilderProduct();
    virtual ~IBuilderProduct();
    virtual void product_part1() = 0;
    virtual void product_part2() = 0;
};

