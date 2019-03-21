/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Colour.cpp
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 21.03.2019

But         : Voir main.cpp

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
*/
#include "Colour.h"

using namespace std;

ostream &operator<<(ostream &os, const Colour &COLOUR) {

    switch (COLOUR) {
        case Colour::Blue:
            os << "Blue";
            break;
        case Colour::Red:
            os << "Red";
            break;
        case Colour::Yellow:
            os << "Yellow";
            break;
        case Colour::Black:
            os << "Black";
            break;
        case Colour::White:
            os << "White";
            break;
        case Colour::Green:
            os << "Green";
            break;
        case Colour::Purpule:
            os << "Purpule";
            break;
        case Colour::Orange:
            os << "Orange";
            break;
        case Colour::Gray:
            os << "Gray";
            break;
        case Colour::Cyan:
            os << "Cyan";
            break;
        default:
            break;
    }

    return os;
}
