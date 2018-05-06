#pragma once
class Status
{
public:
    Status();
    virtual ~Status();
private:
    std::string status;
public:
    Status(std::string status);
    void displayStatus();
};

