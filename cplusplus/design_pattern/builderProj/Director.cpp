#include "stdafx.h"
#include "Director.h"
#include "IBuilder.h"


Director::Director()
{
    //std::cout << "Director::Director()" << std::endl;
}


Director::~Director()
{
    //std::cout << "Director::~Director()" << std::endl;
}


Director::Director(std::shared_ptr<IBuilder> builder) : m_Builder(builder)
{
    //std::cout << "Director::Director(std::shared_ptr<IBuilder> builder)" << std::endl;
}


void Director::create()
{
    m_Builder->createPart1();
    m_Builder->createPart2();
}
