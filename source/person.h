#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <string>

class Person {
public:
    Person();
    // Person(std::string name, int age);
    ~Person();
    virtual void setTimeOfArrival();
    virtual void getTimeOfArrival();

private:
    std::string name;
    int age;
    int timeOfArrival;
};

// class Student : public Person {
// public:
//     Student();
//     // Student(std::string name, int age, int grade);
//     ~Student();
//     // void setTimeOfArrival(int);
//     // int getTimeOfArrival();
//     void setGrade();
//     void getGrade();
// private:
//     int grade = 2;
// };  
// class Employee : public Person {
// public:
//     Employee();
//     Employee(std::string name, int age, int salary);
//     ~Employee();
//     // void setTimeOfArrival(int);
//     // int getTimeOfArrival();
//     void PayRise(int raise);
// private:
//     int salary;
// }; 

#endif // __PERSON_H__