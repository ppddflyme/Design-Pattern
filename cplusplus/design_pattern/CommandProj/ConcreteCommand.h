#pragma once
#include "ICommand.h"
#include "Receiver.h"
class ConcreteCommand :
    public ICommand
{
public:
    ConcreteCommand();
    ~ConcreteCommand();
private:
    std::shared_ptr<Receiver> receiver;
public:
    ConcreteCommand(std::shared_ptr<Receiver> receiver);
    virtual void exec() override;
};

