//
// Created by argoc on 10/29/22.
//

#include "Zombie.h"

Zombie *newZombie(std::string name) {
    Zombie *zombie = new Zombie(name);
    return zombie;
}