/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : main.cpp
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 21.03.2019

But         : Mettre en place une fonction générique de tri sur un vecteur.

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <string>
#include "test.h"
#include "Date.h"
#include "Point.h"
#include "Colour.h"

using namespace std;

int main() {

    // vecteurs
    vector<int> vInt = {3, 5, 1, 7, 9, 0};
    vector<string> vString = {"pomme", "citron", "orange", "banane"};
    vector<Colour> vCouleur = {Colour::Orange, Colour::Blue, Colour::Cyan};
    vector<Point> vPoint = {{1, 2}, {3, 4}, {5, 5}, {-1, 7}, {3, 1}};
    vector<Date> vDate = {{1, 2, 1927}, {3, 4, 2002}, {5, 5, 2001}};

    test(vInt);
    test(vString);
    test(vCouleur);
    test(vPoint);
    test(vDate);


    return 0;
}