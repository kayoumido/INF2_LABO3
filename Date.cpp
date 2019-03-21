/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Date.cpp
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 21.03.2019

But         : Voir main.cpp

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
*/

#include "Date.h"

Date::Date(unsigned day, unsigned month, unsigned year)
        : day(day), month(month), year(year){}


bool Date::operator<(const Date &DATE) {
    if (this->year < DATE.year) return true;

    if (this->year == DATE.year and this->month < DATE.month) return true;

    return this->year == DATE.year and this->month == DATE.month and this->day < DATE.day;
}

std::ostream &operator<<(std::ostream &os, const Date &DATE) {

    os << DATE.day << "." << DATE.month << "." << DATE.year;

    return os;
}
