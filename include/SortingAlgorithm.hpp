#ifndef _SORTINGALGORITHMHPP_
#define _SORTINGALGORITHMHPP_

#include <vector>

template<class Key> class SortingAlgorithm{
 public:
  virtual void sort(std::vector<Key>&, int) = 0;
  virtual void swap(Key *first, Key *second) = 0;
  virtual void print(std::vector<Key>&) = 0;
};

#endif /* _SORTINGALGORITHMHPP_ */
