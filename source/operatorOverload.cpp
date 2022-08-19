#include <iostream>
#include <string>

typedef int Timespan;
class Time{
public:
    Time(int h, int m, int s)
        : hour(h), minutes(m), seconds(s) {
         secondsSinceMidnight = hour * 60 * 60 + minutes * 60 + seconds;
         }

    void printSeconds(){
        std::cout << "seconds in a day: " << secondsInDay << std::endl;
    }
    void printSecondsSinceMidnight(){
        std::cout << "seconds since midnight: " << secondsSinceMidnight << std::endl;
    }

private:
    int hour;
    int minutes;
    int seconds;
    int secondsSinceMidnight;

    const int secondsInDay = (24 * 60 * 60) ;
};

int main(){
    Time t(1,2, 34);
    t.printSeconds();
    t.printSecondsSinceMidnight();


    return 0;
}