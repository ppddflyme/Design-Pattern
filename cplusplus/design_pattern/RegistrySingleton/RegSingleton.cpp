#include "stdafx.h"
#include <iostream>
#include "RegSingleton.h"
#include "RegSingletonChild.h"

std::map<std::string, std::shared_ptr<RegSingleton>> RegSingleton::m_map;

RegSingleton::RegSingleton()
{
    std::cout << "RegSingleton::RegSingleton()" << std::endl;
}


RegSingleton::~RegSingleton()
{
    std::cout << "RegSingleton::~RegSingleton()" << std::endl;
}

std::shared_ptr<RegSingleton> RegSingleton::getInstance(std::string name)
{
    //static std::map<std::string, std::shared_ptr<RegSingleton>> m_map;
    //static std::shared_ptr<RegSingleton> regSingleton (new RegSingleton());
    //static std::shared_ptr<RegSingleton> regSingletonChild(new RegSingletonChild());

    //m_map.insert(std::make_pair("RegSingleton", regSingleton));
    //m_map.insert(std::make_pair("RegsingletonChild", regSingletonChild));
    if (m_map.find(name) == m_map.end()) {
        if (name.compare("RegSingletonChild") == 0) {
            m_map.insert(std::make_pair("RegSingletonChild", std::shared_ptr<RegSingleton>(new RegSingletonChild())));
        }
        if (name.compare("RegSingleton") == 0) {
            m_map.insert(std::make_pair("RegSingleton", std::shared_ptr<RegSingleton>(new RegSingleton())));
        }
    }

    return m_map[name]; 
}

void RegSingleton::registry(std::string name, std::shared_ptr<RegSingleton> regObj)
{
    m_map.insert(std::make_pair(name, regObj));
}


void RegSingleton::sayHi()
{
    std::cout << "RegSingleton::sayHi()" << std::endl;
}
