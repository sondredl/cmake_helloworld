#include <iostream>
#include <string>

 #include "footballer.h"
// #include "footballer.cpp"

int main()
{
    Footballer rob;
    // rob.DisplayFootballer();
    rob.setData("Rob", 13, GOALKEEPER, 3);
    rob.printFootballer();

    Footballer *bob = new Footballer();
    bob->setData("BoB", 3, STRIKER, 69);
    bob->printFootballer();

    Footballer *gus = new Footballer("Gus", 1, MIDFIELDER, 0);
    gus->printFootballer();
    // Gus->printFootballer();

    bob->~Footballer();
    gus->~Footballer();

    return 0;
}
