/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Point.cpp
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 19.03.2019
But         :
Remarque(s) : -
Compilateur : g++ 8.2.1
-----------------------------------------------------------------------------------
 */

#include <cmath>


#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

bool Point::operator<(const Point &POINT) {

    auto thisNorm   = sqrt(pow(this->x, 2) + pow(this->y, 2));
    auto pointNorm  = sqrt(pow(POINT.x, 2) + pow(POINT.y, 2));

    return thisNorm < pointNorm;
}

std::ostream &operator<<(std::ostream &os, const Point &POINT) {

    os << "(" << POINT.x << ", " << POINT.y << ")";

    return os;
}

