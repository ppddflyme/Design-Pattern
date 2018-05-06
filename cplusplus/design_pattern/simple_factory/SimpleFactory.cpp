#include "stdafx.h"
#include "SimpleFactory.h"
#include "Apple.h"
#include "Banane.h"
#include "BadFruit.h"


SimpleFactory::SimpleFactory()
{
}


SimpleFactory::~SimpleFactory()
{
}


//IFruit SimpleFactory::createFruit(string fruitName)
//{
//    if ()
//    return IFruit();
//}


shared_ptr<IFruit> SimpleFactory::create_fruit(string fruitName)
{
    if (fruitName.compare("apple") == 0) {
        return shared_ptr<IFruit>(new Apple());
    }
    else if (fruitName.compare("banane") == 0)
        return shared_ptr<IFruit>(new Banane());
    else
        throw BadFruit();
}
