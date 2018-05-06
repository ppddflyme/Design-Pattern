#pragma once
#include "MyObject.h"
#include "MyIterator.h"
class Aggregation
{
public:
    Aggregation();
    virtual ~Aggregation();
private:
    std::shared_ptr<MyObject> collect[100];
    int size = 0;
    int index = 0;
public:
    void addObject(std::shared_ptr<MyObject> ob);
    void removeObject(std::shared_ptr<MyObject> ob);
    virtual  std::shared_ptr<MyIterator> getIterator();
    int getElementCount();
    std::shared_ptr<MyObject> getElement(int idx);
};

