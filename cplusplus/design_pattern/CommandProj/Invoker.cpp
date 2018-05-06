#include "stdafx.h"
#include "Invoker.h"
#include "ICommand.h"


Invoker::Invoker()
{
}


Invoker::~Invoker()
{
}


Invoker::Invoker(std::shared_ptr<ICommand> command) : command(command)
{
}


void Invoker::run()
{
    command->exec();
}
