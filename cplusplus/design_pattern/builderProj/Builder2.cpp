#include "stdafx.h"
#include "Builder2.h"


Builder2::Builder2()
{
    //std::cout << "Builder2::Builder2()" << std::endl;
}


Builder2::~Builder2()
{
   // std::cout << "Builder2::~Builder2()" << std::endl;
}


Builder2::Builder2(std::shared_ptr<IBuilderProduct> product) : IBuilder(product)
{
    //std::cout << "Builder2::Builder2(std::shared_ptr<IBuilderProduct> product)" << std::endl;
}


void Builder2::createPart1()
{
    getProduct()->product_part1();
}


void Builder2::createPart2()
{
    getProduct()->product_part2();
}
