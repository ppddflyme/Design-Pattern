#include "stdafx.h"
#include "BuilderProduct1.h"


BuilderProduct1::BuilderProduct1()
{
   // std::cout << "BuilderProduct1::BuilderProduct1()" << std::endl;
}

BuilderProduct1::BuilderProduct1(const BuilderProduct1 & that)
{
    std::cout << "BuilderProduct1::BuilderProduct1(const BuilderProduct1 & that)" << std::endl;
    if (this != &that)
        *this = that;
}


BuilderProduct1::~BuilderProduct1()
{
   // std::cout << "BuilderProduct1::~BuilderProduct1()" << std::endl;
}


void BuilderProduct1::product_part1()
{
    std::cout << "BuilderProduct1::product_part1()" << std::endl;
}


void BuilderProduct1::product_part2()
{
    std::cout << "BuilderProduct1::product_part2()" << std::endl;
}
