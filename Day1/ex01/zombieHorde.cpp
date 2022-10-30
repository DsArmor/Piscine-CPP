//
// Created by argoc on 10/30/22.
//

#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name) {
    if (N <= 0)
        return (NULL);

    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
        horde[i].announce();
    }
    return horde;
}
