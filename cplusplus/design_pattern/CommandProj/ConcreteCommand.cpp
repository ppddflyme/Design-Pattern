#include "stdafx.h"
#include "ConcreteCommand.h"
#include "Receiver.h"


ConcreteCommand::ConcreteCommand()
{
}


ConcreteCommand::~ConcreteCommand()
{
}


ConcreteCommand::ConcreteCommand(std::shared_ptr<Receiver> receiver)
{
}

void ConcreteCommand::exec()
{
    receiver->sayHi();
}
