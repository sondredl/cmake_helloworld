#ifndef __BANKACCOUNT_H__
#define __BANKACCOUNT_H__

#include <iostream>
#include <vector>
#include <string>

/**
 * @brief BankAccount::BankAccount
 * @param name
 * @param balance
 */
class BankAccount {
public:
    BankAccount();
    BankAccount(std::string);
    BankAccount(std::string, double);
    ~BankAccount();

    void setBalance(double);

    std::string getAccountHolder();
    double getBalance();
    int getNextId();

    void deposit(double);
    void withdraw(double);

    void printBalance();
    
    static const double OVERDRAFT_LIMIT;


    void printAccounts();
    void addAccount(std::string);

    void setAccountBallance(int, double);

private:
    double accountFees;
    double balance;
    std::string accountHolder;
    static int nextId;

    std::vector<std::string> accounts;
    // double * accountBalance [10];
};

void vector() {
std::vector<int> marks;
std::vector<int>::iterator iter;

    for(iter = marks.begin(); iter < marks.end(); iter++){
        std::cout << *iter << std::endl;
    }

    // can only be used if the vector is already initialized
    for(auto iter = marks.begin(); iter != marks.end(); iter++){
        std::cout << *iter << std::endl;
    }

    for(auto ent = Employee.begin(); ent != Employee.end(); ent++){ // loops through pointers
        std::cout << ent->name << std::endl;
        // ent->first;
        // ent->second;
    }
    for(auto entry : Employee){ // loops through actual elements
        std::cout << entry.name << std::endl;
        // entry.first;
        // entry.second;
    }
}

#endif