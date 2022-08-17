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

void arrayDirectForLoop(int *a){
    std::cout << "array direct targeting loop" << std::endl;
    for (int *i = a; i <= &a[9]; i++){
        std::cout << "a[" << *i << "] = " << *i << std::endl;
    }
    std::cout << std::endl;
}

#endif // __POINTER_H_