#pragma once
#include "Observer.h"
class SubjectNew
{
public:
    SubjectNew();
    virtual ~SubjectNew();
    void notifyAll(std::string msg);

private:
    std::vector<std::shared_ptr<Observer>> collect;
public:
    void addObserver(std::shared_ptr<Observer> ob);
    void deleteObserver(std::shared_ptr<Observer> ob);
};

