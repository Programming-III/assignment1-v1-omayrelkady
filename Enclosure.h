#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"


class Enclosure {
private:
    Animal** animals;   
    int capacity;
    int currentCount;

public:
    Enclosure() : animals(nullptr), capacity(0), currentCount(0) {}

    Enclosure(int cap) : capacity(cap), currentCount(0) {
        animals = new Animal*[capacity];
        for (int i = 0; i < capacity; ++i) animals[i] = nullptr;
    }

    ~Enclosure() {
     
        for (int i = 0; i < currentCount; ++i) {
            delete animals[i];
            animals[i] = nullptr;
        }
        delete[] animals;
    }

    int getCapacity() const { return capacity; }
    int getCurrentCount() const { return currentCount; }

    void addAnimal(Animal* a) {
        if (currentCount < capacity) {
            animals[currentCount++] = a;
        } else {
            
            cout << "Enclosure is full. Cannot add more animals.\n";
        }
    }

    void displayAnimals(int enclosureNumber = 1) const {
        cout << "Enclosure " << enclosureNumber << " Animals:\n\n";
        for (int i = 0; i < currentCount; ++i) {
            animals[i]->display();
            cout << "\n";
        }
    }
};








#endif
