#pragma once
#include "IComponent_safety.h"
class Composite_safty: public IComponent_safety
{
public:
    Composite_safty();
    virtual ~Composite_safty();

    virtual void displayClassName() override;

private:
    std::vector<std::shared_ptr<IComponent_safety>> myCollection;
public:
    void addChild(std::shared_ptr<IComponent_safety> child);
    void deleteChild(std::shared_ptr<IComponent_safety> child);
    void loopChild();
};

