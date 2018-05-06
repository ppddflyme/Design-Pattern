#pragma once
#include "Abstraction.h"
class RefinedAbstractioin :
    public Abstraction
{
public:
    RefinedAbstractioin();
    ~RefinedAbstractioin();
    RefinedAbstractioin(std::shared_ptr<Implementor> impl);

    virtual void operation() override;

};

