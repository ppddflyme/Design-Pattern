#pragma once
#include "Aggregation.h"
class ConcreteAggregation :
    public Aggregation, public std::enable_shared_from_this<ConcreteAggregation>
{
public:
    ConcreteAggregation();
    ~ConcreteAggregation();

    virtual void addObject(std::shared_ptr<MyObject> ob) override;


    virtual void removeObject(std::shared_ptr<MyObject> ob) override;


    virtual int getElementCount() override;


    virtual std::shared_ptr<MyObject> getElement(int idx) override;

private:
    std::shared_ptr<MyObject> collect[100];
    int size = 0;
    int index = 0;

    virtual std::shared_ptr<MyIterator> getIterator() override;

};

