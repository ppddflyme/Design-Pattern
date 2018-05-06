#include "stdafx.h"
#include "FlyWeightFactory.h"
#include "ConcreteFlyWeight.h"


FlyWeightFactory::FlyWeightFactory()
{

}


FlyWeightFactory::~FlyWeightFactory()
{
}

std::shared_ptr<FlyWeight> FlyWeightFactory::factory(std::string str)
{
    auto it = flies.find(str);
    if (it != flies.end())
        return flies[str];
    else {
        std::shared_ptr<FlyWeight> tempObj = std::make_shared<ConcreteFlyWeight>(str);
        flies.insert(std::make_pair(str, tempObj));
        return tempObj;
    }
}
