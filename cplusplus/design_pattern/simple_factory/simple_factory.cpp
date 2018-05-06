// simple_factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SimpleFactory.h"
#include "IFruit.h"
#include "BadFruit.h"


int main()
{
    try {
        shared_ptr<IFruit> fruit = SimpleFactory::create_fruit("apple");
        fruit->displayFruitName();
        shared_ptr<IFruit> fruit2 = SimpleFactory::create_fruit("banane");
        fruit2->displayFruitName();
        shared_ptr<IFruit> fruit3 = SimpleFactory::create_fruit("banana");
    }
    catch (BadFruit e) {
        e.diplayError();
    }
    return 0;
}

