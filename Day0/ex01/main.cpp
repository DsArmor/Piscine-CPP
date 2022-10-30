#include "PhoneBook.h"

int main()
{
    PhoneBook app;
    std::string in;
    while(1)
    {
        std::cout << "Please, enter command: ";
        std::cin >> in;
        if (in == "EXIT")
        {
            std::cout << "Goodbye" << std::endl;
            break;
        }
        else if (in == "ADD")
            app.addContact();
        else if (in == "SEARCH")
            app.findContact();
        else
            std::cout << "Enter correct command!" << std::endl;
        clearerr(stdin);
        std::cin.clear();
    }
    return 0;
}