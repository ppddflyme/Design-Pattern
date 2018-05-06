#pragma once
#include <memory>
#include "IProduct.h"
using std::shared_ptr;
class ICreator
{
public:
    ICreator();
    virtual ~ICreator();
    virtual shared_ptr<IProduct> factory() = 0;
};

