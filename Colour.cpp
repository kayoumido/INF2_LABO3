//
// Created by deekay on 21/03/19.
//

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
