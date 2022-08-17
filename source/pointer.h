#ifndef __POINTER_H__
#define __POINTER_H__

#include <iostream>
#include <cmath>
#include <string>

void helloWorld(){
    std::cout << "\nHello World!" << std::endl;
}

// int a[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// void f(int a[]);    // would work, but not recommended
void f(int *a);     // correct syntax

void f(int *a){
    int *p = &a[4];
    std::cout << "*p: " << *p << std::endl;

    int *p2 = a;
    std::cout << "int *p2 = a"<< std::endl;
    std::cout << "*p2 is an adress: " << a << std::endl;
}


void arrayIndexingForLoop(int *a){
    std::cout << "array indexing loop" << std::endl;
    for (int i = 0; i < 10; i++){
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
    std::cout << std::endl;
}
// int andA = &a[9]; 
// void arrayDirectForLoop(int *a){ // pointer increment is much more efficient than the array indexing loop
//     std::cout << "array direct targeting loop" << std::endl;
//     for (int *i = a; i <= a[9]; i++){
//         std::cout << "a[" << *i << "] = " << *i << std::endl;
//     }
//     std::cout << std::endl;
// }

double randomDoubles[10];
void fillRandomDoubles(){
    for (int i = 0; i < 10; i++){
        randomDoubles[i] = rand() / (double)RAND_MAX;
    }
}

// double *findLargest(){
//     double *largest = randomDoubles[0];
//     for (int i = 0; i < 10; i++){
//         if (randomDoubles[i] > largest){
//             largest = randomDoubles[i];
//         }
//     }
//     std::cout << "\nlargest double in array: " << largest << std::endl;
//     return largest;
// }
double *findLargest(){
    double *largest = randomDoubles;
    for (int i = 0; i < 10; i++){
        if (randomDoubles[i] > *largest){
            largest = &randomDoubles[i];
        }
    }
    // std::cout << "\nlargest double in array: " << *largest << std::endl;
    return largest;
}

double *findSmallest(){
    double *smallest = randomDoubles;
    for (int i = 0; i < 10; i++){
        if (randomDoubles[i] < *smallest){
            smallest = &randomDoubles[i];
        }
    }
    // std::cout << "\nsmallest double in array: " << smallest << std::endl;

    // double average = returnAverage(randomDoubles);
    // std::cout << "\naverage of array: " << average << std::endl;
    return smallest;
}
double returnAverage(double *arr){
    double sum = 0;
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    double average = sum / 10;
    return average;
}

void printRandomDoubles(){
    for (int i = 0; i < 10; i++){
        std::cout << randomDoubles[i] << std::endl;
    }
    double *largest = findLargest();
    double *smallest = findSmallest();
    double average = returnAverage(randomDoubles);
    std::cout << "largets: " << *largest << std::endl;
    std::cout << "smallest: " << *smallest << std::endl;
    std::cout << "average: " << average << std::endl;
}
/*
can change the pointer, but cannot change the data it points to 
void foo(const BigType *bt){
    bt largeElement;
    for(&largeElement){
        doSomething(largeElement);
    };
}
*/

// allways use the following!!!
// const Type *ptr; // pointer to a const Type, aka the pointer can change, but the data it points to cannot

#endif // __POINTER_H_