#include "stdafx.h"
#include <iostream>
#include "PcProducer.h"
#include "PcCpu.h"
#include "PcRam.h"
using std::cout;
using std::endl;

PcProducer::PcProducer()
{
    cout << "PcProducer::PcProducer()" << endl;
}


PcProducer::~PcProducer()
{
    cout << "PcProducer::~PcProducer()" << endl;
}

shared_ptr<ICpu> PcProducer::createCpu()
{
    return shared_ptr<ICpu>(new PcCpu);
}

shared_ptr<IRam> PcProducer::createRam()
{
    return shared_ptr<IRam>(new PcRam());
}
