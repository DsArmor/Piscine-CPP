//
// Created by argoc on 10/29/22.
//

#include "Zombie.h"

Zombie::Zombie(std::string name) : _name(name) {

}

Zombie::~Zombie() {
    std::cout << this->_name << " was destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

