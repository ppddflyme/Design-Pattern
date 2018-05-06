#pragma once
#include "Visitor.h"
class ConcreteVisitor :
    public Visitor
{
public:
    ConcreteVisitor();
    ~ConcreteVisitor();
    virtual void visit(std::shared_ptr<Node> node) override;
};

