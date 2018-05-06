#include "stdafx.h"
#include "ConcreteObserver1.h"


ConcreteObserver1::ConcreteObserver1()
{
}


ConcreteObserver1::~ConcreteObserver1()
{
}

void ConcreteObserver1::update(std::string msg)
{
    std::cout << "ConcreteObserver1 -- msg: " << msg << std::endl;
}
