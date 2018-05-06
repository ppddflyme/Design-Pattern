#include "stdafx.h"
#include "IBuilder.h"


IBuilder::IBuilder()
{
    //std::cout << "IBuilder::IBuilder()" << std::endl;
}


IBuilder::~IBuilder()
{
    //std::cout << "IBuilder::~IBuilder()" << std::endl;
}

void IBuilder::createPart2()
{
}

void IBuilder::createPart1()
{
}

IBuilder::IBuilder(std::shared_ptr<IBuilder> builder) {
   //this = builder;
    //std::cout << "IBuilder::IBuilder(std::shared_ptr<IBuilder> builder)" << std::endl;
}


//void IBuilder::create_part1()
//{
//}


IBuilder::IBuilder(std::shared_ptr<IBuilderProduct> product) : m_product(product)
{
    //std::cout << "IBuilder::IBuilder(std::shared_ptr<IBuilderProduct> product)" << std::endl;
}

std::shared_ptr<IBuilderProduct> IBuilder::getProduct() const
{
    return m_product;
}
