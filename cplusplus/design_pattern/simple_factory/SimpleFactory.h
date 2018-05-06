#pragma once
#include "IFruit.h"
#include <string>
#include <memory>
using std::string;
using std::shared_ptr;
class SimpleFactory
{
public:
    SimpleFactory();
    ~SimpleFactory();
//    IFruit createFruit(string fruitName);
    static shared_ptr<IFruit> create_fruit(string fruitName);
};

