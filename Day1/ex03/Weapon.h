//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_WEAPON_H
#define PISCINE_WEAPON_H

#include "iostream"
#include "cstring"

class Weapon {
public:
    Weapon();
    Weapon(const std::string &type);
    ~Weapon();
    std::string getType() const;
    void setType(const std::string &type);

private:
    std::string _type;
};


#endif //PISCINE_WEAPON_H
