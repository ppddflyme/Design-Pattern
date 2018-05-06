// ObserverProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcreteSubject.h"
#include "Observer.h"
#include "ConcreteObserver1.h"
#include "ConcreteObserver2.h"
#include "CocreteSubjectNew.h"

int main()
{
    std::shared_ptr<ConcreteSubject> sub = std::make_shared<ConcreteSubject>();
    std::shared_ptr<Observer> ob1 = std::make_shared<ConcreteObserver1>();
    std::shared_ptr<Observer> ob2 = std::make_shared<ConcreteObserver2>();
    sub->addObserver(ob1);
    sub->addObserver(ob2);
    sub->notifyAll("Hello World");

    sub->deleteObserver(ob2);
    sub->notifyAll("Hello World2");

    std::cout << "************************************" << std::endl;
    std::shared_ptr<CocreteSubjectNew> sub2 = std::make_shared<CocreteSubjectNew>();
    sub2->addObserver(ob1);
    sub2->addObserver(ob2);
    sub2->changeState("gogogo");
    return 0;
}

