//
// Created by argoc on 10/30/22.
//

#ifndef PISCINE_POINT_H
#define PISCINE_POINT_H

#include "Fixed.h"

class Point {
public:
    Point();
    Point(Point const &rhs);
    Point(float x, float y);
    Point & operator=(Point const &rhs);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;

private:
    Fixed x;
    Fixed y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif //PISCINE_POINT_H
