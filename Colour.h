/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Colour.h
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 21.03.2019

But         : Voir main.cpp

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO3_COLOUR_H
#define LABO3_COLOUR_H

#include <iostream>

enum class Colour {
    Blue,
    Red,
    Yellow,
    Black,
    White,
    Green,
    Purpule,
    Orange,
    Gray,
    Cyan
};

/**
 * @brief Stream operator overload
 * 
 * @param os 
 * @param COLOUR 
 * @return std::ostream& 
 */
std::ostream &operator<<(std::ostream &os, const Colour &COLOUR);

#endif