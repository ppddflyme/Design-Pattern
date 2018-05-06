#pragma once
class Observer
{
public:
    Observer();
    virtual ~Observer();
    virtual void update(std::string msg) = 0;
};

