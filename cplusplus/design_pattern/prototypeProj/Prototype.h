#pragma once
class Prototype
{
public:
    Prototype();
    ~Prototype();
private:
    int weight;
    int height;
public:
    Prototype(int height, int weight);
   std::shared_ptr<Prototype> clone();
   int getWeight() const;
   void setWeight(int weight);
   int getHeight() const;
   void setHeight();
   Prototype(const Prototype & that);
};

