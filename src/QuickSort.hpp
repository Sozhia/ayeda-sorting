#ifndef _QUICKSORTHPP_
#define _QUICKSORTHPP_

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class QuickSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>& vector, int size) {
    print(vector, 0, size);
    // base case
    if (size <= 1)
      print(vector, 0, size-1);
 
    quickSort(vector, 0, size-1);

    print(vector, 0, size - 1);
  }

  void swap(Key *first, Key *second) {
    Key temp = *first; 
    *first = *second; 
    *second = temp;
  }

  void quickSort(std::vector<Key>& vector, int start, int end) {
    print(vector);
    int i = start , f = end ;
    int pivotIndex = (i+f)/2;
    while (i <= f){
        while (vector[i] < vector[pivotIndex]) i++ ;
        while (vector[f] > vector[pivotIndex]) f-- ;
        if (i <= f) {
          swap(&vector[i],&vector[f]) ;
          i++ ; 
          f-- ;
        } ;
    } ;
    if (start < f) quickSort(vector, start, f) ; 
    if (i < end) quickSort(vector, i, end) ; 
  }

  void print(std::vector<Key>& vector){
    for(int i = start; i < end; i++) 
      std::cout << "["<<vector[i]<<"]";
    
    getchar();
  }
  
};

#endif /* _QUICKSORTHPP_ */