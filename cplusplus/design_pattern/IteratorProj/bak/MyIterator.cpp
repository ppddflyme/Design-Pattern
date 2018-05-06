#include "stdafx.h"
#include "MyIterator.h"


MyIterator::MyIterator()
{
    index = 0;
    size = 0;
}


MyIterator::~MyIterator()
{
}

MyIterator::MyIterator(const Aggregation & agg):agg(agg)
{
}

void MyIterator::first()
{
    index = 0;
}


void MyIterator::next()
{
    ++index;
}


bool MyIterator::isDone()
{
    return (index <= size) ? true : false;
}


std::shared_ptr<MyObject> MyIterator::getCurrentElement()
{
    return agg.getElement(index);
}
