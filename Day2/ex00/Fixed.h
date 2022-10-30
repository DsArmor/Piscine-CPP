//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_FIXED_H
#define PISCINE_FIXED_H

#include "iostream"

class Fixed {
public:
    Fixed();
    Fixed(Fixed const &copy);
    Fixed & operator=(Fixed const &rhs);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:
    int _value;
    static const int _fract = 8;
};


#endif //PISCINE_FIXED_H
