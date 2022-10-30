//
// Created by argoc on 10/29/22.
//

#ifndef PISCINE_PHONEBOOK_H
#define PISCINE_PHONEBOOK_H

#include "iostream"
#include "iomanip"
#include "cstring"
#include "Contact.h"

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void findContact();
private:
    int index;
    Contact contacts[8];
    int printAll();
    static void printStr(std::string str);
};

#endif //PISCINE_PHONEBOOK_H
