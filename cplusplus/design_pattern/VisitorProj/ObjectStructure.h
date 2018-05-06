#pragma once
#include "Node.h"
#include "Visitor.h"
class ObjectStructure
{
public:
    ObjectStructure();
    ~ObjectStructure();
private:
    std::vector<std::shared_ptr<Node>> collect;
public:
    void addNode(std::shared_ptr<Node> node);
    void loopCollect(std::shared_ptr<Visitor> v);
};

