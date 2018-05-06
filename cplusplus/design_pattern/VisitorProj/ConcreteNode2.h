#pragma once
#include "Node.h"
class ConcreteNode2 :
    public Node, public std::enable_shared_from_this<ConcreteNode2>
{
public:
    ConcreteNode2();
    ~ConcreteNode2();
    virtual void showMe() override;
    virtual void accept(std::shared_ptr<Visitor> v) override;
};

