#pragma once
#include "Implementor.h"
class Abstraction
{
public:
    Abstraction();
    virtual ~Abstraction();
private:
    std::shared_ptr<Implementor> m_Impl;
public:
    Abstraction(std::shared_ptr<Implementor> impl);
    virtual void operation();
};

