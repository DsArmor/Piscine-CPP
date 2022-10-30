//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_FIXED_H
#define PISCINE_FIXED_H

#include "iostream"
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(int const val);
    Fixed(float const val);
    Fixed(Fixed const &copy);
    Fixed & operator=(Fixed const &rhs);
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat(void) const;
    int toInt(void) const;
private:
    int _value;
    static const int _fract = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif //PISCINE_FIXED_H
