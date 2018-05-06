#include "stdafx.h"
#include "Momento.h"


Momento::Momento()
{
}


Momento::~Momento()
{
}


Momento::Momento(std::string status) : status(status)
{
}


void Momento::setStatus(std::string status)
{
    this->status = status;
}


std::string Momento::getStatus()
{
    return status;
}
