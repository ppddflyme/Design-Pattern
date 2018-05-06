#pragma once
#include "Status.h"
class ConcreteStatus1 :
    public Status
{
public:
    ConcreteStatus1();
    ~ConcreteStatus1();
    ConcreteStatus1(std::string status);
};

