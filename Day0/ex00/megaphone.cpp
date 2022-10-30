//
// Created by argoc on 10/27/22.
//
#include <iostream>
#include "cstring"

int main(int argc, char *argv[]) {
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc >= 1) {
        for (int i = 1; i < argc; i++) {
            for (size_t j = 0; j < std::strlen(argv[i]); j++)
                argv[i][j] = std::toupper(argv[i][j]);
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }
}