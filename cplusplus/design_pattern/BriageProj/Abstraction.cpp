#include "stdafx.h"
#include "Abstraction.h"


Abstraction::Abstraction()
{
}


Abstraction::~Abstraction()
{
}


Abstraction::Abstraction(std::shared_ptr<Implementor> impl) : m_Impl(impl)
{
}


void Abstraction::operation()
{
    m_Impl->operationImp();
}
