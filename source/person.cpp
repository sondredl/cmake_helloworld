#include "person.h"

Person::Person()
{
    timeOfArrival = 0; 
}
// Person::Person(std::string name, int age)
//     : name(name), age(age) 
// {}
Person::~Person()
{
    std::cout << "Person destructor called" << std::endl; 
}

void Person::setTimeOfArrival(){}
void Person::getTimeOfArrival(){}

// Student::Student()
// {}
// Student::Student(std::string name, int age, int grade)
// {
//     // this->name = name;
//     // this->age = age; 
//     this->grade = grade; 
// }
// Student::~Student()
// {}
// void Student::setTimeOfArrival(){
//     std::cout << "derived Student::setTimeOfArrival" << std::endl;
//     }
// void Student::getTimeOfArrival(){
//     std::cout << "derived getTimeOfArrival" << std::endl; // return timeOfArrival; 
//     }
// void Student::setGrade()
// {
//     // this->grade = grade; 
//     std::cout << "student::getGrade" << std::endl;
// }
// int Student::getGrade()
// {
//      return grade; 
// }
// Employee::Employee()
// {}
// Employee::Employee(std::string name, int age, int salary)
// {
    // // this->name = name;
    // // this->age = age;
    // // this->salary = salary;
// }
// Employee::~Employee()
// {}
// // void Employee::setTimeOfArrival(int time)
// //     {}
// // int Employee::getTimeOfArrival(){ //return timeOfArrival; 
// //     return 0; 
// //     }
// void Employee::PayRise(int raise)
// {
    // salary += raise; 
// }
