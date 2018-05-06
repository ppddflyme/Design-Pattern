#include "stdafx.h"
#include "ConcreteIterator.h"


ConcreteIterator::ConcreteIterator()
{
}


ConcreteIterator::ConcreteIterator(std::shared_ptr<Aggregation> agg):agg(agg), size(agg->getElementCount())
{
}

void ConcreteIterator::first()
{
    index = 0;
}


void ConcreteIterator::next()
{
    ++index;
}


bool ConcreteIterator::isDone()
{
    return (index < size) ? false : true;
}


std::shared_ptr<MyObject> ConcreteIterator::getCurrentElement()
{
    auto temp = agg.lock();
    return temp->getElement(index);
}


ConcreteIterator::~ConcreteIterator()
{
}
