#ifndef __BANKACCOUNT_H__
#define __BANKACCOUNT_H__

#include <iostream>

class BankAccount {
public:
    BankAccount();
    BankAccount(std::string);
    BankAccount(std::string, double);
    ~BankAccount();

    void setBalance(double);

    std::string getAccountHolder();
    double getBalance();

    void deposit(double);
    void withdraw(double);

    void printBalance();

private:
    double accountFees;
    double balance;
    std::string accountHolder;
};


#endif