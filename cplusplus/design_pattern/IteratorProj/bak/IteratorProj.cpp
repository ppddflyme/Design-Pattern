// IteratorProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Aggregation.h"
#include "ConcreteAggregation.h"
#include "MyObject.h"



int main()
{
    std::shared_ptr<Aggregation> agg = std::make_shared<ConcreteAggregation>();
    std::shared_ptr<MyObject> ob1 = std::make_shared<MyObject>();
    std::shared_ptr<MyObject> ob2 = std::make_shared<MyObject>();
    agg->addObject(ob1);
    agg->addObject(ob2);

    std::shared_ptr<MyIterator> it = agg->getIterator();
    for (it->first(); !it->isDone(); it->next()) {
        it->getCurrentElement()->sayHi();
    }

    return 0;
}

