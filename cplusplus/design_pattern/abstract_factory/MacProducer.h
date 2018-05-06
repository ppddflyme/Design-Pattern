#pragma once
#include "IComputerProducer.h"
class MacProducer :
    public IComputerProducer
{
public:
    MacProducer();
    ~MacProducer();
    virtual shared_ptr<ICpu> createCpu();
    virtual shared_ptr<IRam> createRam();
};

