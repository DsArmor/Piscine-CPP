//
// Created by argoc on 10/29/22.
//

#include "Zombie.h"

int main() {
    Zombie zombie = Zombie("Oldus");
    zombie.announce();
    Zombie *guilty = newZombie("Guilty");
    guilty->announce();
    delete guilty;
    randomChump("Bob");
    return 0;
}