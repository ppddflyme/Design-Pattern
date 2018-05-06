#pragma once
#include <map>
#include <memory>
#include <string>

class RegSingleton
{
private:
    static std::map<std::string, std::shared_ptr<RegSingleton>> m_map;
public:
    virtual ~RegSingleton();
    static std::shared_ptr<RegSingleton> getInstance(std::string name);
    static void registry(std::string name, std::shared_ptr<RegSingleton> regObj);
protected:
    RegSingleton();
    

public:
    virtual void sayHi();
};

