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

    //std::weak_ptr<MyIterator> it = agg->getIterator();
    //std::shared_ptr<MyIterator> it2 = it.lock();
    std::shared_ptr<MyIterator> it2 = agg->getIterator();
    for (it2->first(); !it2->isDone(); it2->next()) {
        it2->getCurrentElement()->sayHi();
    }

    //delete it;

    return 0;
}

