// StatusProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Status.h"
#include "StatusContext.h"
#include "ConcreteStatus1.h"
#include "ConcreteStatus2.h"

int main()
{
    std::shared_ptr<Status> status1 = std::make_shared<ConcreteStatus1>("Hello");
    std::shared_ptr<Status> status2 = std::make_shared<ConcreteStatus2>("World");
    std::shared_ptr<StatusContext> context = std::make_shared<StatusContext>(status1);
    context->showStatus();
    context->changeStatus(status2);
    context->showStatus();

    return 0;
}

