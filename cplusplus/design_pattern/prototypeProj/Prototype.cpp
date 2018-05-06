#include "stdafx.h"
#include "Prototype.h"
#include <iostream>


Prototype::Prototype()
{
    weight = 0;
    height = 0;
}


Prototype::~Prototype()
{
    std::cout << "Prototype::~Prototype()" << std::endl;
}


Prototype::Prototype(int height, int weight) : height(height), weight(weight)
{
}

std::shared_ptr<Prototype> Prototype::clone()
{
    return std::make_shared<Prototype>(*this);
}


int Prototype::getWeight() const
{
    return weight;
}


void Prototype::setWeight(int weight)
{
    weight = weight;
}


int Prototype::getHeight() const
{
    return height;
}


void Prototype::setHeight()
{
    height = height;
}


Prototype::Prototype(const Prototype & that)
{
    height = that.getHeight();
    weight = that.getWeight();
}
