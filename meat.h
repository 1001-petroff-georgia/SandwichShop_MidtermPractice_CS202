#ifndef MEAT_H
#define MEAT_H

#include <iostream>
using namespace std;

class Meat
{
    protected:
        string name, type;
        int numMeats;
    public:
        //constructors
        Meat();
        Meat(string, string, int);
        Meat(Meat const&);

        //getters
        string getName();
        string getType();
        int getNumMeats();

        //setters
        void setName(string);
        void setType(string);
        void setNumMeats(int);

        //addl. methods
        void printMeat();
};

#endif