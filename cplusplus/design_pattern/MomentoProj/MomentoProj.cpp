// MomentoProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Originator.h"
#include "CareTaker.h"

int main()
{
    std::shared_ptr<Originator> originator = std::make_shared<Originator>("Hello World");
    std::shared_ptr<CareTaker> careTaker = std::make_shared<CareTaker>(originator->createMomento());
    originator->printStatus();
    originator->updateStatus("Hi");
    originator->printStatus();
    originator->restoreStatus(careTaker->returnMomento());
    originator->printStatus();
    return 0;
}

