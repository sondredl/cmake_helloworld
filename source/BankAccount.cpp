#include "BankAccount.h"

int BankAccount::nextId = 0; // remember to initialize static variables, but without the "static"

BankAccount::BankAccount() {
    balance = 0;
}
BankAccount::BankAccount(std::string name, double balance) {
    this->accountHolder = name;
    this->balance = balance;
}
BankAccount::BankAccount(std::string name) {
    this->accountHolder = name;
}
BankAccount::~BankAccount() {
    std::cout << "Account for" << 
    this->accountHolder << 
    " is destroyed!" << std::endl;
}

int BankAccount::getNextId() {
    return nextId;
}
void BankAccount::setBalance(double balance) {
    this->balance = balance;
    BankAccount::printBalance();
}

std::string BankAccount::getAccountHolder() {
    return this->accountHolder;
}

double BankAccount::getBalance() {
    return this->balance;
}

void BankAccount::deposit(double amount) {
    this->balance += amount;
    BankAccount::printBalance();
}

void BankAccount::withdraw(double amount) {
    this->balance -= amount;
    BankAccount::printBalance();
}

void BankAccount::printBalance() {
    std::cout << "Balance: " << this->balance << std::endl;
}