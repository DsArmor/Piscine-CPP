//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_HUMANB_H
#define PISCINE_HUMANB_H

#include "Weapon.h"

class HumanB {
public:
    HumanB(std::string name, Weapon &weapon);
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);

private:
    std::string _name;
    Weapon *_weapon;
};


#endif //PISCINE_HUMANB_H
