//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_HARL_H
#define PISCINE_HARL_H

#include "iostream"

class Harl {
public:
    Harl();
    ~Harl();
    void complain(std::string level);

private:
    void debug(void);

    void info(void);

    void warning(void);

    void error(void);
};


#endif //PISCINE_HARL_H
