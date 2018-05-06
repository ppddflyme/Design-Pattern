#include "stdafx.h"
#include "ConcreteObserver2.h"


ConcreteObserver2::ConcreteObserver2()
{
}


ConcreteObserver2::~ConcreteObserver2()
{
}

void ConcreteObserver2::update(std::string msg)
{
    std::cout << "ConcreteObserver2 -- msg: " << msg << std::endl;
}
