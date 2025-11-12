#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"


lass Mammal : public Animal {
private:
    string furColor;

public:
    Mammal() : Animal(), furColor("") {}
    Mammal(const string& name, int age, bool isHungry, const string& furColor)
        : Animal(name, age, isHungry), furColor(furColor) {}
    ~Mammal() override {}

    string getFurColor() const { return furColor; }
    void setFurColor(const string& c) { furColor = c; }

    void display() const override {
       
        Animal::display();
    }
};







#endif
