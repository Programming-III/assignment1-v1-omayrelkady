#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    // Constructors / Destructor
    Animal() : name(""), age(0), isHungry(false) {}
    Animal(const string& name, int age, bool isHungry)
        : name(name), age(age), isHungry(isHungry) {}
    virtual ~Animal() {}

    // Getters / Setters
    string getName() const { return name; }
    void setName(const string& n) { name = n; }

    int getAge() const { return age; }
    void setAge(int a) { age = a; }

    bool getIsHungry() const { return isHungry; }
    void setIsHungry(bool h) { isHungry = h; }

    // Methods
    virtual void display() const {
        cout << name << " (Age: " << age << ", "
             << (isHungry ? "Hungry" : "Not Hungry") << ")";
    }

    virtual void feed() {
        // Simple behavior: if hungry, feeding makes it not hungry; otherwise do nothing.
        if (isHungry) isHungry = false;
    }


#endif
