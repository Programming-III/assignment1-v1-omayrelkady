#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
class Enclosure {
private:
    Animal** animals;   // dynamic array of Animal*
    int capacity;
    int currentCount;

public:
    Enclosure() : animals(nullptr), capacity(0), currentCount(0) {}

    Enclosure(int cap) : capacity(cap), currentCount(0) {
        animals = new Animal*[capacity];
        for (int i = 0; i < capacity; ++i) animals[i] = nullptr;
    }

    ~Enclosure() {
        // Assume ownership of animals and delete them
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
            // Optional: resize (not required here); for safety, delete passed pointer
            // but typically caller should handle. We'll just print an error and keep pointer alive.
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
