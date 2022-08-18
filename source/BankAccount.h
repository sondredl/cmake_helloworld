#ifndef __BANKACCOUNT_H__
#define __BANKACCOUNT_H__

#include <iostream>

/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
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

private:
    double accountFees;
    double balance;
    std::string accountHolder;
    static int nextId;
};


#endif