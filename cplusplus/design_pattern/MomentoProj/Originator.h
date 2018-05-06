#pragma once
#include "Momento.h"
class Originator
{
public:
    Originator();
    ~Originator();
private:
    std::string status;
public:
    Originator(std::string status);
    void updateStatus(std::string status);
    void printStatus();
    std::shared_ptr<Momento> createMomento();
    void restoreStatus(std::shared_ptr<Momento> momento);
};

