#pragma once
class Mediator;
class Colleague
{
public:
    Colleague();
    virtual ~Colleague();
private:
    std::shared_ptr<Mediator> mediator;
public:
    Colleague(std::shared_ptr<Mediator> mediator);
    virtual void action() = 0;
    void change();
};

