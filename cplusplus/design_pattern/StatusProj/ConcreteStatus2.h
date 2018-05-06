#pragma once
#include "Status.h"
class ConcreteStatus2 :
    public Status
{
public:
    ConcreteStatus2();
    ~ConcreteStatus2();
    ConcreteStatus2(std::string status);
};

