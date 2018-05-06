// StrategyProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Context.h"
#include "ConcreteStragety1.h"
#include "ConcreteStragety2.h"

int main()
{
    std::shared_ptr<Context> context1 = std::make_shared<Context>(std::make_shared<ConcreteStragety1>());
    context1->operation();
    std::shared_ptr<Context> context2 = std::make_shared<Context>(std::make_shared<ConcreteStragety2>());
    context2->operation();
    return 0;
}

