// prototypeProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Prototype.h"
#include <iostream>


int main()
{
    std::shared_ptr<Prototype> thisClass = std::make_shared<Prototype>(1, 2);
    std::shared_ptr<Prototype> thatClass = thisClass->clone();
    std::cout << "height = " << thatClass->getHeight() << ",  weight = " << thatClass->getWeight() << std::endl;
    return 0;
}

