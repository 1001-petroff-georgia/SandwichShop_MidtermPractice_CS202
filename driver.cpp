#include "hamburger.h"

int main(){

    Meat doublePatty("Double Patty", "Beef", 2);
    Hamburger doubleBurger("Double Beef Burger", &doublePatty, false, true, true);

    doubleBurger.printHamburger();

    doublePatty.setType("Chicken");

    doubleBurger.printHamburger();

    return 0;
}
