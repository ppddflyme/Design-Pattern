#pragma once
#include "Subject.h"
class ProxySubject :
    public Subject
{
public:
    ProxySubject();
    ~ProxySubject();

    virtual void request() override;

private:
    void preRequest();
    void postRequest();
    std::shared_ptr<Subject> realSubject;
};

