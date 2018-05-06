#pragma once
#include "ICreator.h"
#include "IProduct.h"
class Creator2 :
    public ICreator
{
public:
    Creator2();
    ~Creator2();
    virtual shared_ptr<IProduct> factory();
};

