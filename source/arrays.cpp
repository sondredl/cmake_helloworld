#include <iostream>
#include <cmath>
#include <string>

std::string cityArray[5];

void setCities(){
    std::cout << "Enter 5 cities: " << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << "City " << i + 1 << ": ";
        std::cin >> cityArray[i];
    }
}


int monthlyPercipitation[13];

void setMonthlyPercipitation(){
    for(int i = 1; i <= 12; i++){
        monthlyPercipitation[i] = std::rand() % 100;
    }
}

void calculateTotalPercipitation(){
    int total = 0;
    for(int i = 1; i <= 12; i++){
        total += monthlyPercipitation[i];
    }
    std::cout << "Total percipitation in city X: " << total << " mm"<< std::endl;
}

void getLimitPercipitation(){
    int min;
    int max;
    for(int i = 1; i <= 12; i++){
        if(i == 0){
            min = monthlyPercipitation[i];
            max = monthlyPercipitation[i];
        }
        if(monthlyPercipitation[i] < min){
            min = monthlyPercipitation[i];
        }
        if(monthlyPercipitation[i] > max){
            max = monthlyPercipitation[i];
        }
    }
    std::cout << "Minimum monthly percipitation in city X: \n" << min << "mm \nand maximum percipitation is \n" << max << "mm" << std::endl;
}

void numberOfMonthsAboveThreshold(int threshold){
    int count = 0;
    for(int i = 1; i <= 12; i++){
        if(monthlyPercipitation[i] > threshold){
            count++;
        }
    }
    std::cout << "Number of months with percipitation above " << threshold << " mm: " << count << std::endl;
}

