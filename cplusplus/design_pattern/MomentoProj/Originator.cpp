#include "stdafx.h"
#include "Originator.h"


Originator::Originator()
{
}


Originator::~Originator()
{
}


Originator::Originator(std::string status) : status(status)
{
}

void Originator::updateStatus(std::string status)
{
    this->status = status;
}


void Originator::printStatus()
{
    std::cout << status.c_str() << std::endl;
}


std::shared_ptr<Momento> Originator::createMomento()
{
    return std::make_shared<Momento>(status);
}


void Originator::restoreStatus(std::shared_ptr<Momento> momento)
{
    status = momento->getStatus();
}
