#include <iostream>
#include <string>
#include <vector>

#include "person.h"

// void footballers();
// void banking();
// void loginDetails();
// void vector();
// void office();
// void employee();

int main()
{
    // Student *s = new Student("John", 4, 5);
    // Student *s = new Student();
    // s->getGrade();
    // delete s;

    return 0;
}

// void office(){
//     Office london("London", "UK");
//     Office oslo("Oslo", "Norway");
//     london.ToString(); 
// }

// void employee(){
//     Employee john("John", 1000);
//     Employee jack("Jack", 800);
//     john.ToString();
//     John.PayRise(100);
//     // employee.ToString();
// }

// void banking(){ 
//     BankAccount *John = new BankAccount("John", 100);

//     John->printBalance();
//     John->deposit(50);
//     John->addAccount("savings");   
//     John->addAccount("daily");   
//     John->addAccount("rent");   
//     John->printAccounts();
//     delete John;

//     BankAccount Mary("Mary", 200);
//     Mary.printBalance();
// }



// void loginDetails() {
//     LoginDetails John("John", "password"); // create John on stack
//     John.printLoginDetails(); // must use . to access member functions because John is on stack
//     // John is deleted when he runs out of scope, because he is on the stack

//     LoginDetails *Jane = new LoginDetails("Jane", "password"); // create Jane on heap
//     Jane->printLoginDetails(); // must use -> to access members of Jane because Jane is on the heap
//     delete Jane; // delete Jane manually because she is on the heap
//     Jane = nullptr; // set Jane to NULL to prevent dangling pointer
// }

// void footballers(){
//     Footballer rob;
//     rob.setData("Rob", 13, GOALKEEPER, 3);
//     rob.printFootballer();

//     Footballer *bob = new Footballer();
//     bob->setData("BoB", 3, STRIKER, 69);
//     bob->printFootballer();

//     Footballer *gus = new Footballer("Gus", 1, MIDFIELDER, 0);
//     gus->printFootballer();

//     bob->~Footballer();
//     gus->~Footballer();

// }