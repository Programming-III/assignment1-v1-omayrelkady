#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

 
class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    
    Animal() : name(""), age(0), isHungry(false) {}
    Animal(const string& name, int age, bool isHungry)
        : name(name), age(age), isHungry(isHungry) {}
    virtual ~Animal() {}

    /
    string getName() const { return name; }
    void setName(const string& n) { name = n; }

    int getAge() const { return age; }
    void setAge(int a) { age = a; }

    bool getIsHungry() const { return isHungry; }
    void setIsHungry(bool h) { isHungry = h; }

   
    virtual void display() const {
        cout << name << " (Age: " << age << ", "
             << (isHungry ? "Hungry" : "Not Hungry") << ")";
    }

    virtual void feed() {
        /
        if (isHungry) isHungry = false;
    }


#endif
