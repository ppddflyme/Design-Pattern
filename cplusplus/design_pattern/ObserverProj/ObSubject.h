#pragma once
class ObSubject
{
public:
    ObSubject();
    virtual ~ObSubject();
    virtual void notifyAll(std::string msg) = 0;
};

