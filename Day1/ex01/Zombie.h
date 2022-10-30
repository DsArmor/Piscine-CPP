//
// Created by argoc on 10/29/22.
//

#ifndef PISCINE_ZOMBIE_H
#define PISCINE_ZOMBIE_H

#include "iostream"

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
    void setName(std::string name);

private:
    std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif //PISCINE_ZOMBIE_H
