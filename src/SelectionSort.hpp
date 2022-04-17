#ifndef C5C58926_B8AD_4B60_9B72_7A560B4AE7A8
#define C5C58926_B8AD_4B60_9B72_7A560B4AE7A8

#include "../include/SortingAlgorithm.hpp"
#include <vector>

template<class Key>
class SelectionSort : public SortingAlgorithm<Key> {
 public:
  void sort(std::vector<Key>&, int);
  void swap(Key *first, Key *second);
  void print(std::vector<Key>&);

};

#endif /* C5C58926_B8AD_4B60_9B72_7A560B4AE7A8 */
