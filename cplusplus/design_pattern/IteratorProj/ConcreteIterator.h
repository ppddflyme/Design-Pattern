#pragma once
#include "MyIterator.h"
#include "Aggregation.h"
class ConcreteIterator :
    public MyIterator
{
public:
    ConcreteIterator();
    ~ConcreteIterator();
    ConcreteIterator(std::shared_ptr<Aggregation> agg);

    virtual void first() override;


    virtual void next() override;


    virtual bool isDone() override;


    virtual std::shared_ptr<MyObject> getCurrentElement() override;

private:
    int index;
    int size;
    std::weak_ptr<Aggregation> agg;
};

