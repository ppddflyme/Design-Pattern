// CommandProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Invoker.h"
#include "ICommand.h"
#include "ConcreteCommand.h"
#include "Receiver.h"

int main()
{
    std::shared_ptr<Receiver> receiver = std::make_shared<Receiver>();
    std::shared_ptr<ICommand> command = std::make_shared<ConcreteCommand>(receiver);
    std::shared_ptr<Invoker> invoker = std::make_shared<Invoker>(command);
    invoker->run();

    return 0;
}

