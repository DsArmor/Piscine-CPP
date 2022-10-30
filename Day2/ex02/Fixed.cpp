//
// Created by argoc on 10/30/22.
//

#include "Fixed.h"

Fixed::Fixed() : _value(0) {
//    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
//    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    this->_value = copy._value;
}

Fixed::Fixed(int const val) {
    _value = val << _fract;
//    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val) {
    _value = (int) roundf(val * (1 << _fract));
//    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
//    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        _value = rhs.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
//    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(const int raw) {
    _value = raw;
}

int Fixed::toInt(void) const {
    return (_value >> _fract);
}

float Fixed::toFloat(void) const {
    return ((float) _value / (1 << _fract));
}

bool Fixed::operator>(const Fixed &rhs) const {
    return _value > rhs._value;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return _value < rhs._value;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return _value == rhs._value;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return _value >= rhs._value;;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return _value <= rhs._value;;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return _value != rhs._value;;
}

Fixed &Fixed::operator++(void) {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    _value++;
    return tmp;
}

Fixed &Fixed::operator--(void) {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    _value--;
    return tmp;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed &rhs) {
    return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) {
    return Fixed(toFloat() / rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) {
    return Fixed(toFloat() * rhs.toFloat());
}

Fixed &Fixed::max(Fixed &one, Fixed &two) {
    if (one > two)
        return one;
    return two;
}

Fixed &Fixed::min(Fixed &one, Fixed &two) {
    if (one < two)
        return one;
    return two;
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two) {
    if (one > two)
        return one;
    return two;
}

const Fixed &Fixed::min(const Fixed &one, const Fixed &two) {
    if (one < two)
        return one;
    return two;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}
