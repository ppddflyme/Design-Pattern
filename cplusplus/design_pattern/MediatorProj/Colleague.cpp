#include "stdafx.h"
#include "Colleague.h"
#include "Mediator.h"


Colleague::Colleague()
{
}


Colleague::~Colleague()
{
}


Colleague::Colleague(std::shared_ptr<Mediator> mediator):mediator(mediator)
{
}


void Colleague::change()
{
    //mediator->colleagueChanged();
}
