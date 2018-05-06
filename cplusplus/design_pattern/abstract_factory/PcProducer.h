#pragma once
#include "IComputerProducer.h"
class PcProducer :
    public IComputerProducer
{
public:
    PcProducer();
    ~PcProducer();
    virtual shared_ptr<ICpu> createCpu();
    virtual shared_ptr<IRam> createRam();
};

