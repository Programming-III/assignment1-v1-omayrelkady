#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



int main() {
    
    Enclosure* e1 = new Enclosure(3);

    
    Animal* a1 = new Mammal("Lion", 5, true, "Golden");       
    Animal* a2 = new Bird("Parrot", 2, false, 0.35f);         
    Animal* a3 = new Reptile("Snake", 3, true, true);         
    e1->addAnimal(a1);
    e1->addAnimal(a2);
    e1->addAnimal(a3);

 
    Visitor* v = new Visitor("Sarah Ali", 3);

    
    e1->displayAnimals(1);
    cout << "Visitor Info:\n";
    cout << "Name: " << v->getVisitorName() << "\n";
    cout << "Tickets Bought: " << v->getTicketsBought() << "\n";

   
    delete v;   
    delete e1;  

    return 0;
}
