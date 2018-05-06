#include "stdafx.h"
#include "ConcreteNode2.h"
#include "Visitor.h"

ConcreteNode2::ConcreteNode2()
{
}


ConcreteNode2::~ConcreteNode2()
{
}

void ConcreteNode2::showMe()
{
    std::cout << "ConcreteNode2::showMe()" << std::endl;
}

void ConcreteNode2::accept(std::shared_ptr<Visitor> v)
{
    v->visit(shared_from_this());
}
