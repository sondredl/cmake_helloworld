#include <iostream>
#include <cmath>
#include <string>

#include "types.h"

void Employee::Employee(){
    my_employee = new Employee;
}
// void Employee::Employee(std::string name, int id, double salary){
    // e->name = name;
    // e->id = id;
    // e->salary = salary;

void printChars(char *str){
    for (int i = 0; i < strlen(str); i++){
        std::cout << str[i] << std::endl;
    }
}
