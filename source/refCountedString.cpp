#include <iostream>
#include <string>

class RefCountedString{
    std::string *str;
    static int refCount;
public:
    RefCountedString(){
        refCount++;
    }
}

int main(){

}