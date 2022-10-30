//
// Created by argoc on 10/30/22.
//

#include "Point.h"

Point::Point() : x(0), y(0) {

}

Point::Point(const Point &rhs) {
    *this = rhs;
}

Point::Point(float x, float y) : x(x), y(y){
}

Point &Point::operator=(const Point &rhs) {
    if (this == &rhs)
        return *this;
    x = rhs.getX();
    y = rhs.getY();
    return *this;
}

Point::~Point() {

}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}
