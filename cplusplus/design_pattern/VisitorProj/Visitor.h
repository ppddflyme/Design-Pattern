#pragma once
//#include "ConcreteNode1.h"
//#include "ConcreteNode2.h"
//class ConcreteNode1;
//class ConcreteNode2;
#include "Node.h"
class Visitor
{
public:
    Visitor();
    virtual ~Visitor();
    virtual void visit(std::shared_ptr<Node> node) = 0;
    //virtual void visit(std::shared_ptr<ConcreteNode1> node) = 0;
    //virtual void visit(std::shared_ptr<ConcreteNode2> node) = 0;
};

