#include "stdafx.h"
#include "Composite_trans.h"


Composite_trans::Composite_trans()
{
}


Composite_trans::~Composite_trans()
{
}

void Composite_trans::addChild(std::shared_ptr<IComponent_trans> child)
{
    myCollection.push_back(child);
}

void Composite_trans::deleteChild(std::shared_ptr<IComponent_trans> child)
{
    auto position = std::find(myCollection.begin(), myCollection.end(), child);
    if (position == myCollection.end())
        return;
    myCollection.erase(position);
}

void Composite_trans::loopChilds()
{
    displayClassName();
    std::for_each(myCollection.begin(), myCollection.end(), [](std::shared_ptr<IComponent_trans> const & it)->void {it->loopChilds(); });
}

void Composite_trans::displayClassName()
{
    std::cout << "Composite_trans::displayClassName()" << std::endl;
}
