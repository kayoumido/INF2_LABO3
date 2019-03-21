//
// Created by deekay on 21/03/19.
//

#ifndef LABO3_DISPLAY_H
#define LABO3_DISPLAY_H

#include <vector>
#include <iostream>

template <typename T>
void display(std::vector<T> &toDisplay) {

    std::cout << "[";

    for (size_t i = 0; i < toDisplay.size(); ++i) {
        if (i) std::cout << ", ";

        std::cout << toDisplay.at(i);
    }

    std::cout << "]";
}


#endif
