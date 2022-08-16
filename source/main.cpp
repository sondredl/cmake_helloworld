/*
#include "header.h"
#include "switch.h"
#include "functionOverload.h"
#include "loops.h"
*/
#include "arithmetics.h"

/*
// #include "loops.cpp"
// #include "exersice_operators_flowcontrol.cpp"
// #include "arithmetics"

// void main_while();
// void for_while();
// void main_for();
// void for_first_five_odd();
// void for_hundred_tofifty();
// void one_two_three();
// void prime_numbers();
// void word(); // changes case of word
// void print_leapYears(int, int);
// void leapYearSwitch();
void loops(){
    one_two_three();
    prime_numbers();
    word(); // changes case of word
    int start = 1991, end = 2020;
    print_leapYears(start, end);
    leapYearSwitch();
}
*/

int main()
{
     // validate_date(32, 1, 2020);
     // main_while();

    //  for_while();
    // main_for();
    // for_first_five_odd();
    // for_hundred_tofifty();

    // prime_numbers();
    // iterator(0, 30);
    getPrimeLimit();

    return 0;
}

//      Exercise 2:  Using conditional logic
//      Validate the day, month, and year. Output a single message saying if the date is valid. 
//      If the date is valid, output it in the format dd/mm/yyyy. Suggestions and requirements:
//      •	Write an if-statement to validate the month (it must be 1…12).
//      •	Write an if-statement to validate the year (let's say the year must be 1900...2099).
//      •	Write an if-statement to ensure the day is 1 or higher.
//      •	Write a switch-statement to ensure the day isn't too big. 
//          The max value is 28, 29, 30, or 31, depending on the month 
//          (and if the month is February, whether it's a leap year).

