// ChainOfResponse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Handler.h"
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"

int main()
{
    std::shared_ptr <Handler> handler1 = std::make_shared<ConcreteHandler1>();
    std::shared_ptr <Handler> handler2 = std::make_shared<ConcreteHandler2>();
    handler1->setHandler(handler2);
    handler1->handler();
    handler2->handler();

    return 0;
}

