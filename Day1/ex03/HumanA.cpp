//
// Created by argoc on 10/30/22.
//

#include "HumanA.h"

HumanA::~HumanA() {

}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {

}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
