#include "stdafx.h"
#include "Banane.h"
#include <iostream>
using std::cout;
using std::endl;


Banane::Banane()
{
}


Banane::~Banane()
{
    cout << "release banane" << endl;
}


void Banane::displayFruitName() const
{
    cout << "Banana" << endl;
}
