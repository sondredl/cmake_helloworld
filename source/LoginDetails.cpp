#include "LoginDetails.h"

/**
 * @brief LoginDetails::LoginDetails
 * @param username
 * @param password
 */
LoginDetails::LoginDetails()  
: username(""), password("") 
{ }

LoginDetails::LoginDetails( std::string username, std::string password)
: username(username), password(password) 
{ }

LoginDetails::~LoginDetails() {
    std::cout << "Login details for " << username << " are destroyed!" << std::endl;
}

/**
 * @brief LoginDetails::getUsername
 * @return
 */
std::string LoginDetails::getUsername() {
    return this->username;
}

/**
 * @brief LoginDetails::getPassword
 * @return
 */
std::string LoginDetails::getPassword() {
    return this->password;
}

/**
 * @brief LoginDetails::setPassword
 * @param password
 */
void LoginDetails::setPassword(std::string password) {
    this->password = password;
}

/**
 * @brief LoginDetails::changePassword
 * @param password
 */
void LoginDetails::changePassword(std::string password) {
    this->password = password;
}

/**
 * @brief LoginDetails::printLoginDetails
 */
void LoginDetails::printLoginDetails() {
    std::cout << "Username: " << this->username << std::endl;
    std::cout << "Password: " << this->password << std::endl;
}