#include "meat.h"

//constructors
Meat::Meat()
{
    name = "";
    type = "";
    numMeats = 0;
}
Meat::Meat(string n, string t, int num)
{
    name = n;
    type = t;
    numMeats = num;
}
Meat::Meat(Meat const &m)
{
    name = m.name;
    type = m.type;
    numMeats = m.numMeats;
}

//getters
string Meat::getName()
{
    return name;
}
string Meat::getType()
{
    return type;
}
int Meat::getNumMeats()
{
    return numMeats;
}

//setters
void Meat::setName(string n)
{
    name = n;
}
void Meat::setType(string t)
{
    type = t;
}
void Meat::setNumMeats(int num)
{
    numMeats = num;
}

//addl. methods
void Meat::printMeat()
{
    cout << numMeats << " " << name << " patties" << endl << endl;
}