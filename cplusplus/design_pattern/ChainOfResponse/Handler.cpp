#include "stdafx.h"
#include "Handler.h"


Handler::Handler()
{
}


Handler::~Handler()
{
}


std::shared_ptr<Handler> Handler::getHandler()
{
    return successor;
}


void Handler::setHandler(std::shared_ptr<Handler> handler)
{
    successor = handler;
}
