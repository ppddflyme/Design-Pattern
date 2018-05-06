#pragma once
#include "Status.h"
class StatusContext
{
public:
    StatusContext();
    ~StatusContext();
    StatusContext(std::shared_ptr<Status> status);
private:
    std::shared_ptr<Status> status;
public:
    void changeStatus(std::shared_ptr<Status> status);
    void showStatus();
};

