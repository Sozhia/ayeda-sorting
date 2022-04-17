#ifndef SELECTIONSORTCPP
#define SELECTIONSORTCPP

#include "./SelectionSort.hpp"
#include <vector>
#include <iostream>

template<class Key>
void SelectionSort<Key>::swap(Key *first, Key *second){
  Key temp = *first; 
  *first = *second; 
  *second = temp;    
}

template<class Key>
void SelectionSort<Key>::sort(std::vector<Key>& vector, int size){
  print(vector);
  int minimun_index;
  for(int i = 0; i < size-1; i++) {
    std::cout << "Index position: " << i << std::endl;
    minimun_index = i;
    for(int j = i+1; j < size; j ++) {
      if (vector[j] < vector[minimun_index]) 
        minimun_index = j;
    }
    swap(&vector[minimun_index], &vector[i]);
    print(vector);
    getchar();
  }
}

template<class Key>
void SelectionSort<Key>::print(std::vector<Key>& vector){
  for(int i = 0; i < vector.size(); i++) {
    std::cout << "["<<vector[i]<<"]";
  }
  std::cout << std::endl;
}

#endif /* SELECTIONSORTCPP */