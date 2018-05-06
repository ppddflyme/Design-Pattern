#pragma once
#include "Node.h"
class ConcreteNode1 :
    public Node, public std::enable_shared_from_this<ConcreteNode1>
{
public:
    ConcreteNode1();
    ~ConcreteNode1();
    virtual void showMe() override;
    virtual void accept(std::shared_ptr<Visitor> v) override;
};

