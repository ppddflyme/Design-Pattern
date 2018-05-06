#pragma once
class FlyWeight
{
public:
    FlyWeight();
    virtual ~FlyWeight();
    virtual void operation(std::string str) = 0;
};

