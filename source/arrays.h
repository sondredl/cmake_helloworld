#ifndef __ARRAYS_H__
#define __ARRAYS_H__

#include "arrays.cpp"

int monthlyPercipitation[13];

void setCities();
void setMonthlyPercipitation();
void calculateTotalPercipitation();
void getLimitPercipitation();
void numberOfMonthsAboveThreshold(int threshold);

#endif // __ARRAYS_H__