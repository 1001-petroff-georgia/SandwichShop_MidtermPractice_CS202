#ifndef HAMBURGER_H
#define HAMBURGER_H

#include "sandwich.h"

class Hamburger : public Sandwich
{
    private:
        bool ketchup, mayo;
    public:
        //constructors
        Hamburger();
        Hamburger(string, Meat*, bool, bool, bool);
        Hamburger(Hamburger const&);

        //getters
        bool getKetchup();
        bool getMayo();

        //setters
        void setKetchup(bool);
        void setMayo(bool);

        //addl. methods
        void printHamburger();
};

#endif