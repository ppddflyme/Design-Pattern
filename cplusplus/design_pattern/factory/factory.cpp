// factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ICreator.h"
#include "IProduct.h"
#include "Creator1.h"
#include "Creator2.h"


int main()
{
    shared_ptr<ICreator> create1(new Creator1());
    shared_ptr<IProduct> p1 = create1->factory();
    shared_ptr<ICreator> create2(new Creator2());
    shared_ptr<IProduct> p2 = create2->factory();
    return 0;
}

