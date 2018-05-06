#pragma once
#include "Mediator.h"
#include <memory>
class ConcreteColleague1;
class ConcreteColleague2;

class ConcreteMediator :
    public Mediator
{
public:
    ConcreteMediator();
    ~ConcreteMediator();
private:
    std::shared_ptr<ConcreteColleague1> colleague1;
    std::shared_ptr<ConcreteColleague2> colleague2;
public:
    void createConcreteMediator();
    virtual void colleagueChanged(std::shared_ptr<Colleague> clleague) override;
};

