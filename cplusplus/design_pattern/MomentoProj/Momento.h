#pragma once
class Momento
{
public:
    Momento();
    ~Momento();
private:
    std::string status;
public:
    Momento(std::string status);
    void setStatus(std::string status);
    std::string getStatus();
};

