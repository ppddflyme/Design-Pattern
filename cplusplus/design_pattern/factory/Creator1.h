#pragma once
#include "ICreator.h"
#include "IProduct.h"
class Creator1 :
    public ICreator
{
public:
    Creator1();
    ~Creator1();
    virtual shared_ptr<IProduct> factory();
};

