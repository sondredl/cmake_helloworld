#include <iostream>
#include <string>

 #include "footballer.h"
 #include "BankAccount.h"
// #include "footballer.cpp"
void footballers();
void banking();

int main()
{
    // footballers();
    banking();

    return 0;
}
void banking(){ 
    BankAccount *John = new BankAccount("John", 100);
    John->printBalance();

}

void footballers(){
    Footballer rob;
    rob.setData("Rob", 13, GOALKEEPER, 3);
    rob.printFootballer();

    Footballer *bob = new Footballer();
    bob->setData("BoB", 3, STRIKER, 69);
    bob->printFootballer();

    Footballer *gus = new Footballer("Gus", 1, MIDFIELDER, 0);
    gus->printFootballer();

    bob->~Footballer();
    gus->~Footballer();

}