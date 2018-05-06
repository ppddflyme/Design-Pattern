#include "stdafx.h"
#include "MultiLingual.h"
#include <iostream>

std::map<std::string, std::shared_ptr<MultiLingual>> MultiLingual::instanceCollection;

std::mutex MultiLingual::g_mutex;

MultiLingual::~MultiLingual()
{
}


std::shared_ptr<MultiLingual> MultiLingual::getInstance(std::string language, std::string region)
{
    std::lock_guard<std::mutex> guard(g_mutex);
    std::string key = language.append("_") + region;

    if (instanceCollection.find(key) != instanceCollection.end()) {
        return instanceCollection.find(key)->second;
    }
    else {
        std::shared_ptr<MultiLingual> newInstance(new MultiLingual(language, region));
        instanceCollection.insert(make_pair(key, newInstance));
        return newInstance;
    }
}

std::string MultiLingual::getKeyValue(std::string key)
{
    std::string str = tree.get<std::string>(key);
    return str;
}


MultiLingual::MultiLingual(std::string language, std::string region) :
    language(language), region(region)
{
    try {
        pt::read_xml(language + region, tree);
    }
    catch (std::runtime_error & e) {
        std::cout << e.what() << std::endl;
    }
}
