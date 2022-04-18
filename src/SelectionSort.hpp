#ifndef C5C58926_B8AD_4B60_9B72_7A560B4AE7A8
#define C5C58926_B8AD_4B60_9B72_7A560B4AE7A8

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class SelectionSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>& vector, int size) {
    print(vector);
    int minimun_index;
    for(int i = 0; i < size-1; i++) {
      std::cout << "Marker position: " << i << " ; Value: " << vector[i]<< std::endl;
      minimun_index = i;
      for(int j = i+1; j < size; j ++) {
        if (vector[j] < vector[minimun_index]) 
          minimun_index = j;
      }
      std::cout << "Marker position for lowest value: " << minimun_index << " ; Value: " << vector[minimun_index]<< std::endl;
      swap(&vector[minimun_index], &vector[i]);
      print(vector);
      getchar();
    }
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
    std::cout << std::endl;
  }

};

#endif /* C5C58926_B8AD_4B60_9B72_7A560B4AE7A8 */
