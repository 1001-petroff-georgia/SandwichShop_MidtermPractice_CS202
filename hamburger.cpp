#include "hamburger.h"

Meat hamburgerMeat("Burger Patty", "Beef", 1);

//constructors
Hamburger::Hamburger()
{
    sandwichType = "Hamburger";
    meatType = &hamburgerMeat;
    lettuceWrap = false;
    ketchup = true;
    mayo = true;
}
Hamburger::Hamburger(string s, Meat *meat, bool l, bool k, bool m)
{
    sandwichType = s;
    meatType = meat;
    lettuceWrap = l;
    ketchup = k;
    mayo = m;
}
Hamburger::Hamburger(Hamburger const &h)
{
    sandwichType = h.sandwichType;
    meatType = h.meatType;
    lettuceWrap = h.lettuceWrap;
    ketchup = h.ketchup;
    mayo = h.mayo;
}

//getters
bool Hamburger::getKetchup()
{
    return ketchup;
}
bool Hamburger::getMayo()
{
    return mayo;
}

//setters
void Hamburger::setKetchup(bool k)
{
    ketchup = k;
}
void Hamburger::setMayo(bool m)
{
    mayo = m;
}

//addl. methods
void Hamburger::printHamburger()
{
    printSandwich();
    
    cout << "is a Hamburger sandwich. It has: " << endl;

    if (ketchup)
    {
        cout << "Ketchup" << endl;
    }
    if (mayo)
    {
        cout << "Mayo" << endl;
    }
    
    meatType->printMeat();
}