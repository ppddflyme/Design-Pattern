#pragma once
class Colleague;
class Mediator
{
public:
    Mediator();
    virtual ~Mediator();
    virtual void colleagueChanged(std::shared_ptr<Colleague> clleague) = 0;
};

