#include "stdafx.h"
#include "CareTaker.h"


CareTaker::CareTaker()
{
}


CareTaker::~CareTaker()
{
}


CareTaker::CareTaker(std::shared_ptr<Momento> momento) : momento(momento)
{
}


void CareTaker::saveMomento(std::shared_ptr<Momento> momento)
{
    this->momento = momento;
}


std::shared_ptr<Momento> CareTaker::returnMomento()
{
    return momento;
}
