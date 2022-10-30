//
// Created by argoc on 10/30/22.
//

#include "Harl.h"

int main(int ar, char **av) {
    Harl harl;

    if (ar != 2) {
        std::cerr << "wrong number of args" << std::endl;
        return 1;
    }
    harl.complain(av[1]);
    return 0;
}