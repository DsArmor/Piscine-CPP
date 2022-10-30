//
// Created by argoc on 10/30/22.
//

#include "Zombie.h"

int main() {
    Zombie *horde = zombieHorde(21, "shon");
    delete [] horde;
    return 0;
}