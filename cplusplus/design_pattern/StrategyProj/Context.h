#pragma once
#include "Strategy.h"
class Context
{
public:
    Context();
    ~Context();
    Context(std::shared_ptr<Strategy> strategy);
    void operation();
private:
    std::shared_ptr<Strategy> stragety;
};

