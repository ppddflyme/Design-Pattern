// ProxyProj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Subject.h"
#include "ProxySubject.h"


int main()
{
    std::shared_ptr<Subject> proxySubject = std::make_shared<ProxySubject>();
    proxySubject->request();
    return 0;
}

