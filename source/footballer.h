#ifndef __FOOTBALLER_H__ 
#define __FOOTBALLER_H__

#include <iostream>
#include <cmath> 
#include <string>

// #include "footballer.cpp"

enum Position{
    GOALKEEPER,
    DEFENDER,
    MIDFIELDER,
    STRIKER
};

typedef unsigned short Goals;

struct Footballer{
public:
    void setData(std::string, int, Position, Goals);
    void printFootballer();
    Footballer();
    Footballer(std::string, int, Position, Goals);
    ~Footballer();

private:
    std::string name;
    int squadNr;
    Position pos;
    Goals points;
};

/*
// void Footballer::setData(std::string n, int s, Position p, Goals g){
//     name = n;
//     squadNr = s;
//     pos = p;
//     points = g;
// }

void Footballer::printFootballer(){
    std::cout << name << "\n" <<
    squadNr << "\n" <<
    pos << "\n" <<
    points << std::endl;
}
*/


#endif // __FOOTBALLER_H__