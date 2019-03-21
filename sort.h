/*
-----------------------------------------------------------------------------------
Laboratoire : 03
Fichier     : sort.h
Auteur(s)   : Doran Kayoumi, Alexandre Simik
Date        : 19.03.2019
But         :
Remarque(s) : -
Compilateur : g++ 8.2.1
-----------------------------------------------------------------------------------
 */

#ifndef LABO3_SORT_H
#define LABO3_SORT_H

#include <vector>

/**
 * @brief Generic sort for vector container.
 *
 * @tparam T (generic type)
 * @param toSort Vector to sort
 */
template <typename T>
void swap(T &lhs, T &rhs) {
   T tmp = rhs;
   rhs = lhs;
   lhs = tmp;
}

template <typename T>
void sort(std::vector<T> &toSort) {
   for (size_t i = 0; i < toSort.size(); ++i) {
      size_t imin = i;
      for (size_t j = i + 1; j < toSort.size(); ++j) {
         if (toSort.at(j) < toSort.at(imin)) {
            imin = j;
         }
      }
      swap(toSort.at(i), toSort.at(imin));
   }
}

#endif
