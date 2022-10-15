#ifndef SANDWICH_H
#define SANDWICH_H

#include "meat.h"

class Sandwich
{
    protected:
        string sandwichType;
        Meat* meatType;
        bool lettuceWrap;
    public:
        //constructors
        Sandwich();
        Sandwich(string, Meat*, bool);
        Sandwich(Sandwich const&);

        //getters
        string getSandwichType();
        Meat* getMeatType();
        bool getLettuceWrap();

        //setters
        void setSandwichType(string);
        void setMeatType(Meat*);
        void setLettuceWrap(bool);
        
        //addl. methods
        void printSandwich();
};

#endif