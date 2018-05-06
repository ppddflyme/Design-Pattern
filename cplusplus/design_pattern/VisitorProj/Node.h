#pragma once
//#include "Visitor.h"
class Visitor;
class Node
{
public:
    Node();
    virtual ~Node();
//    void showMe();
    virtual void showMe() = 0;
    virtual void accept(std::shared_ptr<Visitor> v) = 0;
};

