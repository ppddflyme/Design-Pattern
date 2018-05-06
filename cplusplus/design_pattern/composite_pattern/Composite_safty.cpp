#include "stdafx.h"
#include "Composite_safty.h"


Composite_safty::Composite_safty()
{
}


Composite_safty::~Composite_safty()
{
}

void Composite_safty::displayClassName()
{
    std::cout << "Composite_safty::displayClassName()" << std::endl;
}


void Composite_safty::addChild(std::shared_ptr<IComponent_safety> child)
{
    auto position = std::find(myCollection.begin(), myCollection.end(), child);
    if (position != myCollection.end())
        return;
    myCollection.push_back(child);
}


void Composite_safty::deleteChild(std::shared_ptr<IComponent_safety> child)
{
    auto position = std::find(myCollection.begin(), myCollection.end(), child);
    if (position != myCollection.end())
        myCollection.erase(position);
}


void Composite_safty::loopChild()
{
    displayClassName();
    for_each(myCollection.begin(), myCollection.end(), [](const std::shared_ptr<IComponent_safety> & it) {if (strncmp(typeid(*it).name(), "class LeafComponent_safety", strlen("class LeafComponent_safety")) == 0) { it->displayClassName(); } \
                     else std::dynamic_pointer_cast<Composite_safty>(it)->loopChild(); });
}
