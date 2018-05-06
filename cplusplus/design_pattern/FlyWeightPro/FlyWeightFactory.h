#pragma once
#include "FlyWeight.h"

class FlyWeightFactory
{
private:
    std::map<std::string, std::shared_ptr<FlyWeight>> flies;
public:
    FlyWeightFactory();
    ~FlyWeightFactory();
    std::shared_ptr<FlyWeight> factory(std::string str);
};

