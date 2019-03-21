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
   /**
    * @brief Stream operator overload
    *
    * @param os
    * @param DATE
    * @return std::ostream&
    */
   friend std::ostream &operator<<(std::ostream &os, const Date &DATE);

  public:
   /**
    * @brief Construct a new Date object
    *
    * @param day
    * @param month
    * @param year
    */
   Date(unsigned day, unsigned month, unsigned year);

   /**
    * @brief Comparaison operator overload.
    *
    * @param DATE
    * @return true if this is smaller than DATE
    * @return false otherwise
    */
   bool operator<(const Date &DATE);

  private:
   unsigned day;
   unsigned month;
   unsigned year;
};

#endif
