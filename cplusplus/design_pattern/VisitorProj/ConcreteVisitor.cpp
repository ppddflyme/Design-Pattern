#include "stdafx.h"
#include "ConcreteVisitor.h"


ConcreteVisitor::ConcreteVisitor()
{
}


ConcreteVisitor::~ConcreteVisitor()
{
}

void ConcreteVisitor::visit(std::shared_ptr<Node> node)
{
    node->showMe();
}
