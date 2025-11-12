#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"


class Reptile : public Animal {
private:
    bool isVenomous;

public:
    Reptile() : Animal(), isVenomous(false) {}
    Reptile(const string& name, int age, bool isHungry, bool isVenomous)
        : Animal(name, age, isHungry), isVenomous(isVenomous) {}
    ~Reptile() override {}

    bool getIsVenomous() const { return isVenomous; }
    void setIsVenomous(bool v) { isVenomous = v; }

    void display() const override {
       
        cout << getName() << " (Age: " << getAge() << ", "
             << (isVenomous ? "Venomous, " : "")
             << (getIsHungry() ? "Hungry" : "Not Hungry") << ")";
    }
};









#endif
