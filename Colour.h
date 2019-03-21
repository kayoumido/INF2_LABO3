//
// Created by deekay on 21/03/19.
//

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
