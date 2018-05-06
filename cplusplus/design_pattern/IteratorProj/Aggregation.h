#pragma once
#include "MyObject.h"
#include "MyIterator.h"
class Aggregation
{
public:
    Aggregation();
    virtual ~Aggregation();
public:
    virtual  void addObject(std::shared_ptr<MyObject> ob) = 0;
    virtual  void removeObject(std::shared_ptr<MyObject> ob) = 0;
    virtual  std::shared_ptr<MyIterator> getIterator() = 0;
    virtual  int getElementCount() = 0;
    virtual  std::shared_ptr<MyObject> getElement(int idx) = 0;
};

