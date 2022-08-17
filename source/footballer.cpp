// #ifndef __FOOTBALLER_CPP__ 
// #define __FOOTBALLER_CPP__
#include <string>

#include "footballer.h"

Footballer::Footballer(){
    name = "";
    squadNr = 0;
    pos = GOALKEEPER;
    points = 0;
}

Footballer::Footballer(std::string name, int squadNr, Position pos, Goals points){
    this->name = name;
    this->squadNr = squadNr;
    this->pos = pos;
    this->points = points;
}

Footballer::~Footballer(){
    std::cout << this->name << " is destroyed!" << std::endl;
}

void Footballer::setData(std::string n, int s, Position p, Goals g){
    name = n;
    squadNr = s;
    pos = p;
    points = g;
}

void Footballer::printFootballer(){
    std::cout << this->name << "\n" <<
    squadNr << "\n" <<
    pos << "\n" <<
    points << "\n" << std::endl;
}



// #endif