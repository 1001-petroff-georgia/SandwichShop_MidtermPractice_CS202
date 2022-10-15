#include "sandwich.h"

Meat sandwichMeat;

//constructors
Sandwich::Sandwich()
{
    sandwichType = "";
    meatType = &sandwichMeat;
    lettuceWrap = false;
}
Sandwich::Sandwich(string s, Meat* m, bool l)
{
    sandwichType = s;
    meatType = m;
    lettuceWrap = l;
}
Sandwich::Sandwich(Sandwich const &s)
{
    sandwichType = s.sandwichType;
    meatType = s.meatType;
    lettuceWrap = s.lettuceWrap;
}

//getters
string Sandwich::getSandwichType()
{
    return sandwichType;
}
Meat* Sandwich::getMeatType()
{
    return meatType;
}
bool Sandwich::getLettuceWrap()
{
    return lettuceWrap;
}

//setters
void Sandwich::setSandwichType(string s)
{
    sandwichType = s;
}
void Sandwich::setMeatType(Meat* m)
{
    meatType = m;
}
void Sandwich::setLettuceWrap(bool l)
{
    lettuceWrap = l;
}

//addl. methods
void Sandwich::printSandwich()
{
    cout << "The " << sandwichType << " ";
}