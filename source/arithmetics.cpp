#include <iostream>
#include <cmath>
#include <string>

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

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void iterator(int start, int end){
    while(start < end){
        if(isPrime(start)){
            std::cout << start << std::endl;
        }
        start++;
    }
}


void getPrimeLimit(){
    int limit;
    std::cout << "Enter a number: ";
    std::cin >> limit;
    // std::cout << "Prime numbers less than " << limit << " are: " << std::endl;
    // for(int i = 2; i < limit; i++){
    //     if(isPrime(i)){
    //         std::cout << i << " ";
    //     }
    // }
    // std::cout << std::endl;
    iterator(1, limit);
}