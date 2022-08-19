#ifndef __lists_maps_h__
#define __lists_maps_h__

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <list>

std::list<std::string, int> employeeList;
class Employee{
public:
    Employee();
    Employee(std::string, int);
    ~Employee();
    void PayRise(int);
    void ToString();

private:
    std::string name;
    int salary;
};

std::map<std::string, int> officeMap;
class Office{
public:
    Office();
    Office(std::string, std::string);
    ~Office();
    void ToString();

private:
    std::string city;
    std::string country;
};

#endif