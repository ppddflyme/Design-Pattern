#pragma once
#include "MyIterator.h"
#include "Aggregation.h"
class ConcreteIterator :
    public MyIterator
{
public:
    ConcreteIterator();
    ~ConcreteIterator();
    ConcreteIterator(const Aggregation & agg);
};

