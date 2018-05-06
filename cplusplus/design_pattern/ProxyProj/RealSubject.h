#pragma once
#include "Subject.h"
class RealSubject :
    public Subject
{
public:
    RealSubject();
    ~RealSubject();

    virtual void request() override;

};

