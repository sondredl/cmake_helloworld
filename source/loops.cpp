// #include "loops.h"

void main_while(){
    std::string city = "Oslo";
        std::cout << "Ender capital of UK, Norway or Netherlands: " << std::endl;
        std::cout << city << std::endl;
    // do {
    //     std::cin >> city;
    // }

    // while(city != "London" && city != "Oslo" && city != "Amsterdam");
}

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

 void leapYear(){
     int year;
     std::cout << "Enter a year: ";
     std::cin >> year;
     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
         std::cout << "Leap year" << std::endl;
     }
     else{
         std::cout << "Not a leap year" << std::endl;
     }
 }

 void print_leapYears(int start, int end){
     for(int i = start; i < end; i++){
         if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
             std::cout << i << std::endl;
         }
     }
 }

 void first_five_odd(){
     std::cout << "print first five odd numbers" << std::endl;
     for( int i = 1, out = 1; i <= 5; i++, out +=2 ){
         std::cout << out << std::endl;
     }
 }

 void for_hundred_tofifty(){
     std::cout << "print 100 to 50 in increments of 10" << std::endl;
     for(int i = 100; i >= 50; i -=10){
         std::cout << i << std::endl;
     }

 }

 void main_for(){
     first_five_odd();
     hundred_tofifty();
 }