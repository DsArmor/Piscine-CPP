//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_HUMANA_H
#define PISCINE_HUMANA_H

#include "Weapon.h"

class HumanA {
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();

private:
    std::string _name;
    Weapon *_weapon;
};


#endif //PISCINE_HUMANA_H
