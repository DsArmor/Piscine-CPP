//
// Created by argoc on 10/29/22.
//

#ifndef PISCINE_ZOMBIE_H
#define PISCINE_ZOMBIE_H

#include "iostream"

class Zombie {
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();

private:
    const std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif //PISCINE_ZOMBIE_H
