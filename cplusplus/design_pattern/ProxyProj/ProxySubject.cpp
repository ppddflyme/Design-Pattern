#include "stdafx.h"
#include "ProxySubject.h"
#include "RealSubject.h"


ProxySubject::ProxySubject()
{
    realSubject = std::make_shared<RealSubject>();
}


ProxySubject::~ProxySubject()
{
}


void ProxySubject::request()
{
    preRequest();
    realSubject->request();
    postRequest();
}

void ProxySubject::preRequest()
{
    std::cout << "ProxySubject::preRequest()" << std::endl;
}


void ProxySubject::postRequest()
{
    std::cout << "ProxySubject::postRequest()" << std::endl;
}
