#include "header.h"

void validate_date(int day, int month, int year){
    if(year <= 2022){
        std::cout << "Year is valid" << std::endl;
    } else { std::cout << "Year is not valid" << std::endl; }
    if(month >= 1 && month <= 12){
        std::cout << "Month is valid" << std::endl;
    } else { std::cout << "Month is not valid" << std::endl; }
    if(day >= 1 && day <= 31){
        std::cout << "Day is valid" << std::endl;
    } else { std::cout << "Day is not valid" << std::endl; }
    switch(month){
        case 1:
        case 2:
            if(day >= 1 && day <= 28){
                std::cout << "Day is valid" << std::endl;
            } else { std::cout << "Day is not valid" << std::endl; }
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            if(day >= 1 && day <= 30){
                std::cout << "Day is valid" << std::endl;
            } else { std::cout << "Day is not valid" << std::endl; }
            break;
        case 12:
            if(day >= 1 && day <= 31){
                std::cout << "Day is valid" << std::endl;
            } else { std::cout << "Day is not valid" << std::endl; }
            break;
        // default:
        //     std::cout << "Month is not valid" << std::endl;
        //     break;
            }
}