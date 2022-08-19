#include "BankAccount.h"

int BankAccount::nextId = 0; // remember to initialize static variables, but without the "static"

/**
 * @brief BankAccount::BankAccount
 * Empty constructor
 */
BankAccount::BankAccount() {
    balance = 0;
}

/**
 * @brief BankAccount::BankAccount
 * @param name set account holder name only
 */
BankAccount::BankAccount(std::string name) {
    this->accountHolder = name;
}
/**
 * @brief BankAccount::BankAccount
 * @param name set account holder name
 * @param balance set account balance
 */
BankAccount::BankAccount(std::string name, double balance) {
    this->accountHolder = name;
    this->balance = balance;
}

BankAccount::~BankAccount() {
    std::cout << "Account for" << 
    this->accountHolder << 
    " is destroyed!" << std::endl;
}

/**
 * @brief BankAccount::getNextId
 * @param balance
 */
int BankAccount::getNextId() {
    return nextId;
}
/**
 * @brief BankAccount::setBalance
 * @param balance
 */ 
void BankAccount::setBalance(double balance) {
    this->balance = balance;
    BankAccount::printBalance();
}

/**
 * @brief BankAccount::getAccountHolder
 * @return
 */
std::string BankAccount::getAccountHolder() {
    return this->accountHolder;
}

/**
 * @brief BankAccount::getBalance
 * @return
 */
double BankAccount::getBalance() {
    return this->balance;
}

/** @brief BankAccount::deposit
 * @param amount
 */
void BankAccount::deposit(double amount) {
    this->balance += amount;
    BankAccount::printBalance();
}

/** @brief BankAccount::withdraw
 * @param amount
 */
void BankAccount::withdraw(double amount) {
    this->balance -= amount;
    BankAccount::printBalance();
}

/** @brief BankAccount::printBalance
 * @param balance
 */
void BankAccount::printBalance() {
    std::cout << "Balance: " << this->balance << std::endl;
}

/** @brief BankAccount::printAccounts
 * @param accountHolder
 * @param accounts
 */
void BankAccount::printAccounts(){
    std::cout << this->accountHolder << " has these accounts: "  << std::endl;
    for(auto iter = accounts.begin(); iter != accounts.end(); iter++){
        std::cout << " - " << *iter << std::endl;
    }
}

/** @brief BankAccount::addAccount
 * @param newAccountName
 */
void BankAccount::addAccount(std::string newAccountName){
    this->accounts.push_back(newAccountName);
    int pos = this->accounts.size() - 1;
    // std::cout << "adding accout" << std::endl;
    std::cout <<this->accounts.size() - 1 << " - " << this->accounts[pos] << std::endl;
    // this->accountBalance[pos] = 0; 
    // this->setAccountBallance(pos, 0);
}

// void BankAccount::setAccountBallance(int pos, double balance){
//     this->accountBalance[pos] = *balance;
// }