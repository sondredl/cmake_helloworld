/*
#include "header.h"
#include "switch.h"
#include "functionOverload.h"
#include "loops.h"
#include "arithmetics.h"
#include "arrays.h"
#include "matrix.h"
*/
#include "pointer.h"

int main()
{
    helloWorld();

    const int a[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // f(a);
    // arrayIndexingForLoop(a); // these two loops are equivalent
    // arrayDirectForLoop(a);  // exersice 5.1

    fillRandomDoubles();
    printRandomDoubles();
    // findLargest();
    // findSmallest();

    // validate_date(32, 1, 2020);
    // main_while();

    //  for_while();
    // main_for();
    // for_first_five_odd();
    // for_hundred_tofifty();

    // prime_numbers();
    // iterator(0, 30);
    // getPrimeLimit();
    // std::cout << "Hello World!\n";

    // setCities();
    // int random = std::rand();
    // std::cout << "random number " << random << std::endl;

    // setMonthlyPercipitation();
    // calculateTotalPercipitation();

    // getLimitPercipitation();
    // numberOfMonthsAboveThreshold(50);

    //  createCubeCoordinates();

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

