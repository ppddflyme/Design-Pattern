#pragma once
class ICommand
{
public:
    ICommand();
    virtual ~ICommand();
    virtual void exec() = 0;
};

