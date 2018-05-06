#include "stdafx.h"
#include "ConcreteNode1.h"
#include "Visitor.h"

ConcreteNode1::ConcreteNode1()
{
}


ConcreteNode1::~ConcreteNode1()
{
}

void ConcreteNode1::showMe()
{
    std::cout << "ConcreteNode1::showMe()" << std::endl;
}

void ConcreteNode1::accept(std::shared_ptr<Visitor> v)
{
    v->visit(shared_from_this());
}
