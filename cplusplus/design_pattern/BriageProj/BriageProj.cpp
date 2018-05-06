// BriageProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Abstraction.h"
#include "RefinedAbstractioin.h"
#include "ConcreteImplementor.h"

int main()
{
    std::shared_ptr<Abstraction> abs = std::make_shared<RefinedAbstractioin>(std::make_shared<ConcreteImplementor>());
    abs->operation();
    return 0;
}

