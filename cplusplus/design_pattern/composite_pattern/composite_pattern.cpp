// composite_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IComponent_trans.h"
#include "Composite_trans.h"
#include "LeafComponent_trans.h"

#include "IComponent_safety.h"
#include "Composite_safty.h"
#include "LeafComponent_safety.h"


int main()
{
    std::shared_ptr<IComponent_trans> leaf_trans1 = std::make_shared<LeafComponent_trans>();
    std::shared_ptr<IComponent_trans> composite_trans1 = std::make_shared<Composite_trans>();
    std::shared_ptr<IComponent_trans> leaf_trans2 = std::make_shared<LeafComponent_trans>();
    std::shared_ptr<IComponent_trans> leaf_trans3 = std::make_shared<LeafComponent_trans>();
    std::shared_ptr<IComponent_trans> leaf_trans4 = std::make_shared<LeafComponent_trans>();
    std::shared_ptr<IComponent_trans> composite_trans2 = std::make_shared<Composite_trans>();
    composite_trans1->addChild(leaf_trans1);
    composite_trans2->addChild(leaf_trans2);
    composite_trans2->addChild(leaf_trans3);
    composite_trans2->addChild(leaf_trans4);
    composite_trans1->addChild(composite_trans2);
    composite_trans1->loopChilds();

    std::cout << "************************************************************************************" << std::endl;
    std::cout << "************************************************************************************" << std::endl;
    std::cout << "************************************************************************************" << std::endl;
    std::shared_ptr<IComponent_safety> leaf_safety1 = std::make_shared<LeafComponent_safety>();
    std::shared_ptr<Composite_safty> composite_safety1 = std::make_shared<Composite_safty>();
    std::shared_ptr<IComponent_safety> leaf_safety2 = std::make_shared<LeafComponent_safety>();
    std::shared_ptr<IComponent_safety> leaf_safety3 = std::make_shared<LeafComponent_safety>();
    std::shared_ptr<IComponent_safety> leaf_safety4 = std::make_shared<LeafComponent_safety>();
    std::shared_ptr<Composite_safty> composite_safety2 = std::make_shared<Composite_safty>();
    composite_safety1->addChild(leaf_safety1);
    composite_safety2->addChild(leaf_safety2);
    composite_safety2->addChild(leaf_safety3);
    composite_safety2->addChild(leaf_safety4);
    composite_safety1->addChild(composite_safety2);
    composite_safety1->loopChild();
    return 0;
}

