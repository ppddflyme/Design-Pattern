#pragma once
#include "IComponent_trans.h"
class Composite_trans :
    public IComponent_trans
{
private:
    std::vector<std::shared_ptr<IComponent_trans>> myCollection;
public:
    Composite_trans();
    ~Composite_trans();

    virtual void addChild(std::shared_ptr<IComponent_trans> child) override;


    virtual void deleteChild(std::shared_ptr<IComponent_trans> child) override;


    virtual void loopChilds() override;


    virtual void displayClassName() override;

};

