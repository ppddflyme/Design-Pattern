#include "stdafx.h"
#include "ConcreteMediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"


ConcreteMediator::ConcreteMediator()
{
}


ConcreteMediator::~ConcreteMediator()
{
}


void ConcreteMediator::createConcreteMediator()
{
    colleague1 = std::make_shared<ConcreteColleague1>();
    colleague2 = std::make_shared<ConcreteColleague2>();
}

void ConcreteMediator::colleagueChanged(std::shared_ptr<Colleague> clleague)
{
    colleague1->action();
    colleague2->action();
}
