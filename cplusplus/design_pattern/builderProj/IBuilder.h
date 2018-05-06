#pragma once
#include "IBuilderProduct.h"
class IBuilder
{
public:
    IBuilder();
    virtual ~IBuilder();
//    void create_part1();
    virtual void createPart2();
    virtual void createPart1();
private:
    std::shared_ptr<IBuilderProduct> m_product;
public:
    IBuilder(std::shared_ptr<IBuilderProduct> product);
    IBuilder(std::shared_ptr<IBuilder> builder);
    std::shared_ptr<IBuilderProduct> getProduct() const;
};

