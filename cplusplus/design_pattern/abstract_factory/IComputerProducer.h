#pragma once
#include <memory>
#include "ICpu.h"
#include "IRam.h"
using std::shared_ptr;

class IComputerProducer
{
public:
    IComputerProducer();
    virtual ~IComputerProducer();
    virtual shared_ptr<ICpu> createCpu() = 0;
    virtual shared_ptr<IRam> createRam() = 0;
};

