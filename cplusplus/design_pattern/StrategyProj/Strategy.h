#pragma once
class Strategy
{
public:
    Strategy();
    virtual ~Strategy();
    virtual void operation() = 0;
};

