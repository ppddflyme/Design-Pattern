#include "stdafx.h"
#include "Context.h"


Context::Context()
{
}


Context::~Context()
{
}


Context::Context(std::shared_ptr<Strategy> strategy) : stragety(strategy)
{
}


void Context::operation()
{
    stragety->operation();
}
