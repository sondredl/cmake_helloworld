#include <iostream>
#include <string>

class Room{
public:
    int i;
};

class House {
public:
    House(int nrooms = 1){
        rooms = new Room[nrooms];
        size = nrooms;
    }

    House(const House &other){
        rooms = new Room[other.size];
        size = other.size;
        for(int ii = 0; ii < size; ii++){
            rooms[ii] = other.rooms[ii];
        }
    }
    virtual ~House(){
        delete[] rooms;
        rooms = nullptr;
    }
    House &operator = (const House &other){
        if (this != &other){
            delete[] rooms;
            rooms = new Room[other.size];
            size = other.size;
            for(int ii = 0; ii < size; ii++){
                rooms[ii] = other.rooms[ii];
            }
        }
        return *this;
    }
    void printHouse(int addr){
        std::cout << "adress: " << addr << std::endl;
    }

private:
    Room *rooms;
    int size;
};



int main(){
    House cottage(3);
    cottage.printHouse(&cottage);
    House nextdoor;
    nextdoor.printHouse();
    nextdoor = cottage;
    nextdoor.printHouse();
    return 0;
}