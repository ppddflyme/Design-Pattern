#include "stdafx.h"
#include "Aggregation.h"


Aggregation::Aggregation()
{
    size = 0;
}


Aggregation::~Aggregation()
{
}


void Aggregation::addObject(std::shared_ptr<MyObject> ob)
{
    collect[index++] = ob;
    ++size;
}


void Aggregation::removeObject(std::shared_ptr<MyObject> ob)
{
}


std::shared_ptr<MyIterator> Aggregation::getIterator()
{
    return std::make_shared<MyIterator>();
}


int Aggregation::getElementCount()
{
    return size;
}


std::shared_ptr<MyObject> Aggregation::getElement(int idx)
{
    return collect[idx];
}
