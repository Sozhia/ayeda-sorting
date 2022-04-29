#ifndef _HEAPSORTHPP_
#define _HEAPSORTHPP_

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class HeapSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>& vector, int size) { heapSort(vector, size); }

  void heapSort(std::vector<Key>& vector, int size){
    
    for (int i = size/2; i > 0; i--)
      baja(i, vector, size);

    for (int i = size; i > 1; i--) {
      swap(&vector[1],&vector[i]);
      baja(1,vector,i-1);
    }

  }

  void baja(int i, std::vector<Key>& vector, int size){
    if (size <= 10)
      print(vector);
    
    while ( 2*i <= size ){
      int h1 = 0, h2 = 0, h = 0;
      h1 = 2*i ; 
      h2 = h1 + 1 ;
      if (h1 == size)
        h = h1;
      else if (vector[h1] > vector[h2])
        h = h1;
      else 
        h = h2;
      if (vector[h] <= vector[i])
        break; 
      else {
        swap(&vector[i],&vector[h]) ;
        i = h;
      }
    };
  }

  void swap(Key *first, Key *second) {
    Key temp = *first; 
    *first = *second; 
    *second = temp;
  }

  void print(std::vector<Key>& vector){
    for(int i = 0; i < vector.size(); i++) {
      std::cout << "["<<vector[i]<<"]";
    }
    getchar();
  }

};

#endif /* _HEAPSORTHPP_ */
