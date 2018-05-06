#pragma once
class SingletonClass
{
public:
    SingletonClass();
    ~SingletonClass();
    static SingletonClass & getInstance();
    void sayHi();
};

