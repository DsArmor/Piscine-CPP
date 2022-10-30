//
// Created by argoc on 10/29/22.
//

#include "Zombie.h"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name) : _name(name) {

}

Zombie::~Zombie() {
    std::cout << _name << " was destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}
