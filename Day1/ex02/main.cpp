//
// Created by argoc on 10/30/22.
//

#include "iostream"

int main() {
    std::string brain = "HI THIS IS BRAIN";

    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << &brain << " << address of the string variable" << std::endl;
    std::cout << stringPTR << " << address held by stringPTR" << std::endl;
    std::cout << &stringREF << " << address held by stringREF" << std::endl;

    std::cout << brain << " << value of the string variable" << std::endl;
    std::cout << *stringPTR << " << value pointed to by stringPTR" << std::endl;
    std::cout << stringREF << " << value pointed to by stringREF" << std::endl;

    return 0;
}
