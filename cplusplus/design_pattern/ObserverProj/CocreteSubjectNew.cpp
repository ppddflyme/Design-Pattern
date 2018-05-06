#include "stdafx.h"
#include "CocreteSubjectNew.h"


CocreteSubjectNew::CocreteSubjectNew()
{
}


CocreteSubjectNew::~CocreteSubjectNew()
{
}


void CocreteSubjectNew::changeState(std::string msg)
{
    this->notifyAll(msg);
}
