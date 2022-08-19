#ifndef __LOGINDETAILS_H__
#define __LOGINDETAILS_H__

#include <cstddef> // for NULL
#include <iostream>
#include <string>

/**
 * @brief LoginDetails::LoginDetails
 * @param username
 * @param password
 */
class LoginDetails {
public:
    LoginDetails();
    LoginDetails(std::string, std::string);
    ~LoginDetails();
    
    std::string getUsername();
    std::string getPassword();
    
    // void setUsername(std::string);
    void setPassword(std::string);

    void changePassword(std::string);
    
    void printLoginDetails();
private:
    const std::string username;
    std::string password;
};


#endif