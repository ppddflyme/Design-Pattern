#pragma once

#include "MyObject.h"
class MyIterator
{
public:
    MyIterator();
    virtual ~MyIterator();
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual std::shared_ptr<MyObject> getCurrentElement() = 0;
};

