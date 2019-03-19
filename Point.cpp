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


#include "Point.h"

bool Point::operator<(const Point &POINT) {
    return this->x < POINT.x and this->y < POINT.y;
}
