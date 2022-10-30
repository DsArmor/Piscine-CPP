//
// Created by argoc on 10/29/22.
//

#include "Contact.h"

Contact::Contact() {

}

Contact::~Contact() {

}

void Contact::create() {
    std::cout << "Enter Name: ";
    std::cin >> firstName;

    std::cout << "Enter Last Name: ";
    std::cin >> lastName;

    std::cout << "Enter Nickname: ";
    std::cin >> nickName;

    std::cout << "Enter Phone number: ";
    std::cin >> phoneNumber;

    std::cout << "Enter Darkest Secret: ";
    std::cin >> darkestSecret;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickName() {
    return nickName;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return darkestSecret;
}




