// MediatorProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mediator.h"
#include "ConcreteMediator.h"
#include "ConcreteColleague1.h"


int main()
{
    std::shared_ptr<ConcreteMediator> mediator = std::make_shared<ConcreteMediator>();
    std::shared_ptr<ConcreteColleague1> colleague1 = std::make_shared<ConcreteColleague1>();
    mediator->createConcreteMediator();
    mediator->colleagueChanged(colleague1);
    return 0;
}

