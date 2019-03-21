/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Point.h
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 21.03.2019

But         : Voir main.cpp

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO3_POINT_H
#define LABO3_POINT_H

#include <iostream>

class Point {
   /**
    * @brief Stream operator overload
    *
    * @param os
    * @param POINT
    * @return std::ostream&
    */
   friend std::ostream &operator<<(std::ostream &os, const Point &POINT);

  public:
   /**
    * @brief Construct a new Point object
    *
    * @param x
    * @param y
    */
   Point(int x, int y);

   /**
    * @brief
    *
    * @param POINT
    * @return true if this is smaller than POINT
    * @return false otherwise
    */
   bool operator<(const Point &POINT);

  private:
   int x;
   int y;
};

#endif
