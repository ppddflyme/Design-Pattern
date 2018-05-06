// AdapterProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Adaptor.h"
#include "Adapter2.h"


int main()
{
    Adaptor thatClass;
    thatClass.sayHi();
    thatClass.sayHello();

    Adapter2 thatClass2;
    thatClass2.sayHello();
    thatClass2.sayHi();

    return 0;
}

