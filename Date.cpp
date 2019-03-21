/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Date.cpp
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 19.03.2019
But         :
Remarque(s) : -
Compilateur : g++ 8.2.1
-----------------------------------------------------------------------------------
 */

#include "Date.h"

bool Date::operator<(const Date &DATE) {
    if (this->year < DATE.year) return true;

    if (this->year == DATE.year and this->month < DATE.month) return true;

    return this->year == DATE.year and this->month == DATE.month and this->day < DATE.day;
}

std::ostream &operator<<(std::ostream &os, const Date &DATE) {

    os << DATE.day << "." << DATE.month << "." << DATE.year;

    return os;
}
