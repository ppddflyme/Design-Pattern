#pragma once
#include "Aggregation.h"
class ConcreteAggregation :
    public Aggregation
{
public:
    ConcreteAggregation();
    ~ConcreteAggregation();

    virtual std::shared_ptr<MyIterator> getIterator() override;

};

