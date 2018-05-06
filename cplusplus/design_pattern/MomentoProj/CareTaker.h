#pragma once
#include "Momento.h"
class CareTaker
{
public:
    CareTaker();
    ~CareTaker();
private:
    std::shared_ptr<Momento> momento;
public:
    CareTaker(std::shared_ptr<Momento> momento);
    void saveMomento(std::shared_ptr<Momento> momento);
    std::shared_ptr<Momento> returnMomento();
};

