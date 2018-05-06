#pragma once
#include "ICommand.h"
class Invoker
{
public:
    Invoker();
    ~Invoker();
private:
    std::shared_ptr<ICommand> command;
public:
    Invoker(std::shared_ptr<ICommand> command);
    void run();
};

