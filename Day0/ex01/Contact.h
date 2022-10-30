//
// Created by argoc on 10/29/22.
//

#ifndef PISCINE_CONTACT_H
#define PISCINE_CONTACT_H

#include "iostream"

class Contact {

public:
    Contact();
    ~Contact();
    void create();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();

private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
};


#endif //PISCINE_CONTACT_H
