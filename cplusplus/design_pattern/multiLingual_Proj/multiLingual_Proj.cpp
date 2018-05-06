// multiLingual_Proj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MultiLingual.h"
#include <iostream>

int main()
{
    std::shared_ptr<MultiLingual> us = MultiLingual::getInstance("en", "US.xml");
    std::string str = us->getKeyValue("US");
    std::cout << str << std::endl;
    std::shared_ptr<MultiLingual> us2 = MultiLingual::getInstance("en", "US.xml");
    std::string str2 = us2->getKeyValue("US");
    std::cout << str2 << std::endl;
    return 0;
}