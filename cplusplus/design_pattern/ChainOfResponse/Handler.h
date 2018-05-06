#pragma once
class Handler
{
public:
    Handler();
    virtual ~Handler();
private:
    std::shared_ptr<Handler> successor;
public:
    std::shared_ptr<Handler> getHandler();
    void setHandler(std::shared_ptr<Handler> handler);
    virtual void handler() = 0;
};

