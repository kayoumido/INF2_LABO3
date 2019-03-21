//
// Created by deekay on 21/03/19.
//

#ifndef LABO3_COLOUR_H
#define LABO3_COLOUR_H

#include <iostream>

enum Colour {
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

std::ostream &operator<<(std::ostream &os, const Colour &COLOUR);

#endif
