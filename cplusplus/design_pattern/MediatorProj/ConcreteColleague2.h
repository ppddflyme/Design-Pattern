#pragma once
#include "Colleague.h"
class ConcreteColleague2 :
    public Colleague
{
public:
    ConcreteColleague2();
    ~ConcreteColleague2();
    virtual void action() override;
};

