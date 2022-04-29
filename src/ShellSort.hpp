#ifndef _SHELLSORTHPP_
#define _SHELLSORTHPP_

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class ShellSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>& vector, int size) {
    std::cout << "Unsorted vector: ";
    print(vector);
    std::cout << std::endl;

    shellSort(vector,size,askforAlpha());

    std::cout << "Sorted vector: ";
    print(vector);
    std::cout << std::endl;
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

  void shellSort(std::vector<Key>& vector, int size, double alfa){
    int delta = size;
    while (delta > 1){
      if (vector.size() <= 10)
        print(vector);
      delta = delta * alfa ;
      deltaSort(delta, vector, size) ;
    };

  }

  void deltaSort(int delta, std::vector<Key>& vector, int size){
    for (int i = delta; i < size; i++){
      Key x = vector[i] ;
      int j = i ;
      while ((j >= delta) && (x < vector[j - delta])){
         vector[j] = vector[j - delta] ;
         j = j - delta ;
      };
    vector[j] = x;
    }
  }

  double askforAlpha(){
    double alpha;
    std::cout << "Enter a value alpha: 0 < alpha < 1" << std::endl;
    std::cin >> alpha;
    return alpha;
  }
};

#endif /* _SHELLSORTHPP_ */