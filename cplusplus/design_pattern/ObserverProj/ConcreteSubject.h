#pragma once
#include "ObSubject.h"
#include "Observer.h"
class ConcreteSubject :
    public ObSubject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    virtual void notifyAll(std::string msg) override;

private:
    std::vector<std::shared_ptr<Observer>> collect;
public:
    void addObserver(std::shared_ptr<Observer> ob);
    void deleteObserver(std::shared_ptr<Observer> ob);
};

