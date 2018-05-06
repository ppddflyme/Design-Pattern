// VisitorProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcreteNode1.h"
#include "ConcreteNode2.h"
#include "ObjectStructure.h"
#include "ConcreteVisitor.h"


int main()
{
    std::shared_ptr<Visitor> v = std::make_shared<ConcreteVisitor>();
    std::shared_ptr<Node> node1 = std::make_shared<ConcreteNode1>();
    std::shared_ptr<Node> node2 = std::make_shared<ConcreteNode2>();
    std::shared_ptr<ObjectStructure> os = std::make_shared<ObjectStructure>();
    os->addNode(node1);
    os->addNode(node2);
    os->loopCollect(v);
    return 0;
}

