#include "stdafx.h"
#include "StatusContext.h"


StatusContext::StatusContext()
{
}


StatusContext::~StatusContext()
{
}


StatusContext::StatusContext(std::shared_ptr<Status> status) : status(status)
{
}


void StatusContext::changeStatus(std::shared_ptr<Status> status)
{
    this->status = status;
}


void StatusContext::showStatus()
{
    status->displayStatus();
}
