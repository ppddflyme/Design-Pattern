#pragma once
#include "SubjectNew.h"
class CocreteSubjectNew :
    public SubjectNew
{
public:
    CocreteSubjectNew();
    ~CocreteSubjectNew();
    void changeState(std::string msg);
};

