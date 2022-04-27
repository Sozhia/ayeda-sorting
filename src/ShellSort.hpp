#ifndef _SHELLSORTHPP_
#define _SHELLSORTHPP_

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class ShellSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>& vector, int size) {
    print(vector, 0, size - 1);
    int minimun_index;
    for(int i = 0; i < size-1; i++) {
      minimun_index = i;
      for(int j = i+1; j < size; j ++) {
        if (vector[j] < vector[minimun_index]) 
          minimun_index = j;
      }
      swap(&vector[minimun_index], &vector[i]);
      print(vector, 0, size - 1);
    }
  }

  void swap(Key *first, Key *second) {
    Key temp = *first; 
    *first = *second; 
    *second = temp;
  }

  void print(std::vector<Key>& vector){
    for(int i = start; i < end; i++) {
      std::cout << "["<<vector[i]<<"]";
    }
    getchar();
  }

};

#endif /* _SHELLSORTHPP_ */