#pragma once
class Implementor
{
public:
    Implementor();
    virtual ~Implementor();
    virtual void operationImp() = 0;
};

