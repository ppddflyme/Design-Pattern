#include "stdafx.h"
#include "ObjectStructure.h"
#include "Node.h"
#include "Visitor.h"


ObjectStructure::ObjectStructure()
{
}


ObjectStructure::~ObjectStructure()
{
}


void ObjectStructure::addNode(std::shared_ptr<Node> node)
{
    this->collect.push_back(node);
}


void ObjectStructure::loopCollect(std::shared_ptr<Visitor> v)
{
    std::for_each(collect.begin(), collect.end(), [v](auto it) {it->accept(v); });
}
