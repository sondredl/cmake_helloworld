#ifndef __TYPES_H__
#define __TYPES_H__

#include <iostream>
#include <cmath>
#include <string>
// #include "types.cpp"


void printChars(char *str);

// struct Arr{
//     int a[10];
// };

struct Employee{
    std::string name;
    int id;
    double salary;
    Employee();
};

 Employee::Employee(){
    my_employee = new Employee();
}
// void Employee::Employee(std::string name, int id, double salary){
    // e->name = name;
    // e->id = id;
    // e->salary = salary;

// void createEmployee(Employee *e, std::string name, int id, double salary);


#endif // __TYPES_H__