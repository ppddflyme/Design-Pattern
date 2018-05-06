#include "stdafx.h"
#include "ConcreteAggregation.h"
#include "ConcreteIterator.h"


ConcreteAggregation::ConcreteAggregation()
{
}


ConcreteAggregation::~ConcreteAggregation()
{
}

void ConcreteAggregation::addObject(std::shared_ptr<MyObject> ob)
{
    collect[index++] = ob;
    ++size;
}


void ConcreteAggregation::removeObject(std::shared_ptr<MyObject> ob)
{
}


int ConcreteAggregation::getElementCount()
{
    return size;
}


std::shared_ptr<MyObject> ConcreteAggregation::getElement(int idx)
{
    return collect[idx];
}

std::shared_ptr<MyIterator> ConcreteAggregation::getIterator()
{
    return std::shared_ptr<MyIterator>(std::make_shared<ConcreteIterator>(shared_from_this()));
}
