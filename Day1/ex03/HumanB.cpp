//
// Created by argoc on 10/30/22.
//

#include "HumanB.h"

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {

}

HumanB::~HumanB() {

}

void HumanB::attack(void) {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name) {

}
