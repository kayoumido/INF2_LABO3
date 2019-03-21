/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : test.h
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 21.03.2019

But         : Voir main.cpp

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO3_DISPLAY_H
#define LABO3_DISPLAY_H

#include <vector>
#include <iostream>
#include "sort.h"

/**
 * @brief Generic display function for vector container.
 * 
 * @tparam T (generic type)
 * @param toDisplay Vector to display
 */
template <typename T>
void display(std::vector<T> &toDisplay) {
    std::cout << "[";
    for (size_t i = 0; i < toDisplay.size(); ++i) {
        if (i) std::cout << ", ";
        std::cout << toDisplay.at(i);
    }
    std::cout << "]" << std::endl;
}


template <typename T>
void test(std::vector<T> &toTest) {

    std::cout << "Before sort :";
    display(toTest);

    sort(toTest);

    std::cout << "After sort : ";
    display(toTest);

    std::cout << std::endl;
}

#endif
