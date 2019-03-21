/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : Date.h
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 19.03.2019
But         :
Remarque(s) : -
Compilateur : g++ 8.2.1
-----------------------------------------------------------------------------------
 */


#ifndef LABO3_DATE_H
#define LABO3_DATE_H

#include <iostream>

class Date {
    friend std::ostream &operator<<(std::ostream &os, const Date &DATE);
public:
    Date(unsigned day, unsigned month, unsigned year) : day(day), month(month), year(year) {};

    unsigned int getDay() const {
        return this->day;
    }

    void setDay(unsigned int day) {
        this->day = day;
    }

    unsigned int getMonth() const {
        return this->month;
    }

    void setMonth(unsigned int month) {
        this->month = month;
    }

    unsigned int getYear() const {
        return this->year;
    }

    void setYear(unsigned int year) {
        this->year = year;
    }

    bool operator < (const Date &DATE);

private:
    unsigned day;
    unsigned month;
    unsigned year;
};


#endif
