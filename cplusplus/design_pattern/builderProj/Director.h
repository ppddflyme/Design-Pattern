#pragma once
#include "IBuilder.h"
class Director
{
public:
    Director();
    ~Director();
private:
    std::shared_ptr<IBuilder> m_Builder;
public:
    Director(std::shared_ptr<IBuilder> builder);
    void create();
};

