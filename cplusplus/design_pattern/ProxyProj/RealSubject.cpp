#include "stdafx.h"
#include "RealSubject.h"


RealSubject::RealSubject()
{
    std::cout << "RealSubject::RealSubject()" << std::endl;
}


RealSubject::~RealSubject()
{
    std::cout << "RealSubject::~RealSubject()" << std::endl;
}

void RealSubject::request()
{
    std::cout << "RealSubject::request()" << std::endl;
}
