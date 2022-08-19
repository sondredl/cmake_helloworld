#include <iostream>
#include <string>

class Employee{
public: 
    Employee(){}
    Employee(std::string first, std::string last)
        : firstName(first), lastName(last)
        {}
    
    std::string firstName;
    std::string lastName;
};

class Staff{
public:
    Staff(int s)
    : size(s) {
        staffMembers = new Employee [size];
    }

    ~Staff(){}

    Employee &operator[] (int idx) {
        if(idx < size && idx >= 0){
            return staffMembers[idx];
        }
    }


    printMembers(){
        for(int i = 0; i < size; i++){
            std::cout << staffMembers[i].firstName << " " << staffMembers[i].lastName << std::endl;
        }
    }
    printEmployee(int pos){
        std::cout << staffMembers[pos].firstName << " " << staffMembers[pos].lastName << std::endl;
    }
    Employee &operator[] (std::string name) {
        for(int i = 0; i < size; i++){
            if(staffMembers[i].lastName == name || staffMembers[i].firstName == name){
                return staffMembers[i];
            }
        }
    }
    printEmployee(std::string name){
        for(int i = 0; i < size; i++){
            if(staffMembers[i].lastName == name || staffMembers[i].firstName == name){
                std::cout << staffMembers[i].firstName << " " << staffMembers[i].lastName << std::endl;
            }
        }
    }

private:
    int size;
    Employee *staffMembers;
    //  static Employee *dummyEmployee = nullptr;
};




int main(){
    Employee john("John", "Doe");
    Employee jack("Jack", "Daniels");

    Staff s(2);

    s[0] = john;
    s[1] = jack;
    // s.printMembers();
    // s.printEmployee(0);
    // s.printEmployee(1);
    s.printEmployee("John");
    s.printEmployee("Daniels");
    return 0;
}