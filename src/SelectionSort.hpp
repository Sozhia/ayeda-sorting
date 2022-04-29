#ifndef C5C58926_B8AD_4B60_9B72_7A560B4AE7A8
#define C5C58926_B8AD_4B60_9B72_7A560B4AE7A8

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class SelectionSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>& vector, int size) {
    std::cout << "Unsorted vector: ";
    print(vector);
    std:: cout << std::endl;
    selectionSort(vector, size);
    std::cout << "Sorted vector: ";
    print(vector);
    std::cout << std::endl;
  }

  void selectionSort(std::vector<Key>& vector, int size){
    int minimun_index;
    for(int i = 0; i < size-1; i++) {
      if (size <= 10)
        print(vector);
      minimun_index = i;
      for(int j = i+1; j < size; j ++) {
        if (vector[j] < vector[minimun_index]) 
          minimun_index = j;
      }
      swap(&vector[minimun_index], &vector[i]);
      
    }
    if (size <= 10)
      print(vector);
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

#endif /* C5C58926_B8AD_4B60_9B72_7A560B4AE7A8 */
