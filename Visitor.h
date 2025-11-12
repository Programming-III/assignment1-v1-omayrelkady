#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor cclass Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor() : visitorName(""), ticketsBought(0) {}
    Visitor(const string& name, int tickets) : visitorName(name), ticketsBought(tickets) {}
    ~Visitor() {}

    string getVisitorName() const { return visitorName; }
    void setVisitorName(const string& n) { visitorName = n; }

    int getTicketsBought() const { return ticketsBought; }
    void setTicketsBought(int t) { ticketsBought = t; }

    void displayInfo() const {
        cout << "Visitor Info:\n";
        cout << "Name: " << visitorName << "\n";
        cout << "Tickets Bought: " << ticketsBought << "\n";
    }
};lass here







#endif
