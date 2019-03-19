/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Point.h
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 19.03.2019
But         :
Remarque(s) : -
Compilateur : g++ 8.2.1
-----------------------------------------------------------------------------------
 */


#ifndef LABO3_POINT_H
#define LABO3_POINT_H


class Point {
public:

    Point(int x, int y) : x(x), y(y) {};

    bool operator < (const Point &POINT);

private:
    int x;
    int y;
};


#endif
