//
// Created by argoc on 10/29/22.
//

#include "Zombie.h"

void randomChump(std::string name) {
    Zombie zom = Zombie(name);
    zom.announce();
}