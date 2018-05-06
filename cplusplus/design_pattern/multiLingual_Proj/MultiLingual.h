#pragma once
#include <memory>
#include <string>
#include <map>
#include <mutex>
#include <boost\property_tree\ptree.hpp>
#include <boost\property_tree\xml_parser.hpp>
namespace pt = boost::property_tree;

class MultiLingual
{
public:
    ~MultiLingual();
    static std::shared_ptr<MultiLingual> getInstance(std::string language, std::string region);
    std::string getKeyValue(std::string key);
private:
    MultiLingual(std::string language, std::string region);
    static std::map<std::string, std::shared_ptr<MultiLingual>> instanceCollection;
    static std::mutex g_mutex;
    pt::ptree tree;
    std::string language;
    std::string region;
};

