#include "stdafx.h"
#include "ConcreteAggregation.h"
#include "ConcreteIterator.h"


ConcreteAggregation::ConcreteAggregation()
{
}


ConcreteAggregation::~ConcreteAggregation()
{
}

std::shared_ptr<MyIterator> ConcreteAggregation::getIterator()
{
    return std::make_shared<ConcreteIterator>(*this);
}
