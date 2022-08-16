#ifndef __FUNCTIONOVERLOAD_H__
#define __FUNCTIONOVERLOAD_H__

#include <iostream>
#include <string>

double calcInterest(int dollars, int cents);
double calcInterest(double amount);
double calcInterest(std::string amountStr);

#endif