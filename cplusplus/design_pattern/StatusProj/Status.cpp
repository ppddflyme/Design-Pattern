#include "stdafx.h"
#include "Status.h"


Status::Status()
{
}


Status::~Status()
{
}


Status::Status(std::string status) : status(status)
{
}


void Status::displayStatus()
{
    std::cout << status.c_str() << std::endl;
}
