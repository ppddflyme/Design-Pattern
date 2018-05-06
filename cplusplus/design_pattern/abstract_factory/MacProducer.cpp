#include "stdafx.h"
#include <iostream>
#include "MacProducer.h"
#include "MacRam.h"
#include "MacCpu.h"
using std::cout;
using std::endl;

MacProducer::MacProducer()
{
    cout << "MacProducer::MacProducer()" << endl;
}


MacProducer::~MacProducer()
{
    cout << "MacProducer::~MacProducer()" << endl;
}

shared_ptr<ICpu> MacProducer::createCpu()
{
    return shared_ptr<ICpu>(new MacCpu());
}

shared_ptr<IRam> MacProducer::createRam()
{
    return shared_ptr<IRam>(new MacRam());
}
