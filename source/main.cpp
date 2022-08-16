#include <iostream>
#include <cmath>
#include <string>

// #include "loops.cpp"
// #include "exersice_operators_flowcontrol.cpp"
// #include "arithmetics"

void one_two_three(){
    for(int i = 1, out = 0 ; out < 5 ; i+=2){
        std::cout << "odd number: " << i << std::endl;
        out++;
    }
}  

void prime_numbers(){
    for(int i = 2; i < 50; i++){
        int prime = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                prime++;
            }
        }
        if(prime == 0){
            std::cout << i << std::endl;
        }
    }
}

std::string change_case(std::string word){
    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            word[i] = word[i] - 32;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] = word[i] + 32;
        }
    }
    return word;

}

void word(){
    std::string word = "HelloWorld";
    word = change_case(word);
    std::cout << word << std::endl;
    word = change_case(word);
    std::cout << word << std::endl;
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
void leapYearSwitch(){
    int year = 0;
    std::cout << "Enter a year: " << std::endl;
    std::cin >> year;
    switch(year){
        case 1800:
            std::cout << "1800 is not a leap year" << std::endl;
            break;
        case 1900:
            std::cout << "1900 is not a leap year" << std::endl;
            break;
        case 2000:
            std::cout << "2000 is not a leap year" << std::endl;
            break;
        default:
            std::cout << year << " is not a Leap year" << std::endl;
            break;
    }
}


// void leapYear(){
//     int year;
//     std::cout << "Enter a year: ";
//     std::cin >> year;
//     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//         std::cout << "Leap year" << std::endl;
//     }
//     else{
//         std::cout << "Not a leap year" << std::endl;
//     }
// }

// void print_leapYears(int start, int end){
//     for(int i = start; i < end; i++){
//         if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
//             std::cout << i << std::endl;
//         }
//     }
// }

int main()
{
    //  main_while();
    //  for_while();
    // main_for();
    // for_first_five_odd();
    // for_hundred_tofifty();
    // one_two_three();
    // prime_numbers();
    // word(); // changes case of word
    // int start = 1991, end = 2020;
    // print_leapYears(start, end);
    leapYearSwitch();

    return 0;
}