// FlyWeightPro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FlyWeightFactory.h"
#include "FlyWeight.h"


int main()
{
    std::shared_ptr<FlyWeightFactory> factory = std::make_shared<FlyWeightFactory>();
    std::string str = "acas";
    std::shared_ptr<FlyWeight> temp = factory->factory(str);
    temp->operation("12345");

    return 0;
}

