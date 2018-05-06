#include "stdafx.h"
#include "Builder1.h"


Builder1::Builder1()
{
    //std::cout << "Builder1::Builder1()" << std::endl;
}


Builder1::~Builder1()
{
    //std::cout << "Builder1::~Builder1()" << std::endl;
}


void Builder1::createPart1()
{
    this->getProduct()->product_part1();
}


void Builder1::createPart2()
{
    getProduct()->product_part2();
}


Builder1::Builder1(std::shared_ptr<IBuilderProduct> product) : IBuilder(product)
{
    //std::cout << "Builder1::Builder1(std::shared_ptr<IBuilderProduct> product)" << std::endl;
}
