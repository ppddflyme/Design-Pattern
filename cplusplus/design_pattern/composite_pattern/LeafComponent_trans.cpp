#include "stdafx.h"
#include "LeafComponent_trans.h"


LeafComponent_trans::LeafComponent_trans()
{
}


LeafComponent_trans::~LeafComponent_trans()
{
}

void LeafComponent_trans::addChild(std::shared_ptr<IComponent_trans> child)
{
}

void LeafComponent_trans::deleteChild(std::shared_ptr<IComponent_trans> child)
{
}

void LeafComponent_trans::loopChilds()
{
    displayClassName();
}

void LeafComponent_trans::displayClassName()
{
    std::cout << "LeafComponent_trans::displayClassName()" << std::endl;
}
