#include "stdafx.h"
#include "Apple.h"
#include <iostream>
using std::cout;
using std::endl;


Apple::Apple()
{
}


Apple::~Apple()
{
    cout << "release apple" << endl;
}


void Apple::displayFruitName() const
{
    cout << "apple" << endl;
}
