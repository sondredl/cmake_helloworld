#include "lists_maps.h"

Employee::Employee() 
    : name(""), salary(0) {
        // employeeList.push_back(std::pair<std::string, int>(this->name, int));
}
Employee::Employee(std::string name, int salary) 
    : name(name), salary(salary) {
}

Employee::~Employee()
{
    std::cout << "Employee destructor called" << std::endl;
}

void Employee::PayRise(int raise) {
    std::cout << "Employee::PayRise()" << std::endl;
    this->salary += 100;
}

void Employee::ToString() {
    employeeList.push_back(this->name);
}




Office::Office() : city(""), country("") {
    std::cout << "Office constructor called" << std::endl;
}
Office::Office(std::string city, std::string country) 
    : city(city), country(country)  {
        officeMap.insert(std::pair<std::string, std::string>("city", "country"));
}
Office::~Office() {
    std::cout << "Office destructor called" << std::endl;
}

void Office::ToString() {
    officeMap.push_back(std::pair<std::string, std::string>(this->city, this->country));
}