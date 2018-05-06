// abstract_factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <memory>
#include "IComputerProducer.h"
#include "PcProducer.h"
#include "MacProducer.h"
#include "ICpu.h"
#include "IRam.h"
using std::shared_ptr;


int main()
{
    shared_ptr<IComputerProducer> f1(new PcProducer());
    shared_ptr<ICpu> cpu1 = f1->createCpu();
    shared_ptr<IRam> ram1 = f1->createRam();

    shared_ptr<IComputerProducer> f2(new MacProducer());
    shared_ptr<ICpu> cpu2 = f2->createCpu();
    shared_ptr<IRam> ram2 = f2->createRam();

    return 0;
}

