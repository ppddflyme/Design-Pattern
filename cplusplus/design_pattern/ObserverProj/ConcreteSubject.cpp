#include "stdafx.h"
#include "ConcreteSubject.h"


ConcreteSubject::ConcreteSubject()
{
}


ConcreteSubject::~ConcreteSubject()
{
}


void ConcreteSubject::notifyAll(std::string msg)
{
    std::for_each(collect.begin(), collect.end(), [msg](auto it) { it->update(msg); });
}

void ConcreteSubject::addObserver(std::shared_ptr<Observer> ob)
{
    if (!(std::find(collect.begin(), collect.end(), ob) != collect.end())) {
        collect.push_back(ob);
    }
}


void ConcreteSubject::deleteObserver(std::shared_ptr<Observer> ob)
{
    auto it = collect.begin();
    if ((it = std::find(collect.begin(), collect.end(), ob)) != collect.end()) {
        collect.erase(it);
    }
}
