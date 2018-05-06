#pragma once
#include "IComponent_trans.h"
class LeafComponent_trans :
    public IComponent_trans
{
public:
    LeafComponent_trans();
    ~LeafComponent_trans();
    virtual void addChild(std::shared_ptr<IComponent_trans> child) override;
    virtual void deleteChild(std::shared_ptr<IComponent_trans> child) override;
    virtual void loopChilds() override;
    virtual void displayClassName() override;
};
