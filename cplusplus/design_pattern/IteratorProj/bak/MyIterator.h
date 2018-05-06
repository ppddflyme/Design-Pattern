#pragma once
#include "Aggregation.h"
class MyIterator
{
public:
    MyIterator();
    virtual ~MyIterator();
private:
    int index;
    int size;
    Aggregation agg;
public:
    MyIterator(const Aggregation & agg);
    void first();
    void next();
    bool isDone();
    std::shared_ptr<MyObject> getCurrentElement();
};

