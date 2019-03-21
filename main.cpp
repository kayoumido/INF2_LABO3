/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : main.cpp
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 19.03.2019
But         :
Remarque(s) : -
Compilateur : g++ 8.2.1
-----------------------------------------------------------------------------------
 */

#include <iostream>
#include <vector>
#include <string>

#include "sort.h"
#include "Date.h"
#include "Point.h"

using namespace std;

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

int main() {

    // vecteurs
    vector<int> vInt = {3, 5, 1, 7, 9, 0};
    vector<string> vString = {"pomme", "citron", "orange", "banane"};
    vector<Colour> vCouleur = {Colour::Orange, Colour::Blue, Colour::Cyan};
    vector<Point> vPoint = {{1, 2}, {3, 4}, {5, 5}, {-1, 7}, {3, 1}};
    vector<Date> vDate = {{1, 2, 1927}, {3, 4, 2002}, {5, 5, 2001}};

    sort(vCouleur);

    for (auto i : vCouleur) {
        cout << i << ", ";
    }

    return 0;
}