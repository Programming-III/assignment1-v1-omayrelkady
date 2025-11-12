#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 
class Bird : public Animal {
private:
    float wingSpan;

public:
    Bird() : Animal(), wingSpan(0.0f) {}
    Bird(const string& name, int age, bool isHungry, float wingSpan)
        : Animal(name, age, isHungry), wingSpan(wingSpan) {}
    ~Bird() override {}

    float getWingSpan() const { return wingSpan; }
    void setWingSpan(float w) { wingSpan = w; }

    void display() const override {
        // Output matches required format (no extra fields shown in sample)
        Animal::display();
    }
};






#endif
