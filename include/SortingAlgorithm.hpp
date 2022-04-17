#ifndef B14853CD_4261_4D96_B4A6_A4D3F122F6B6
#define B14853CD_4261_4D96_B4A6_A4D3F122F6B6

#include <vector>

template<class Key> class SortingAlgorithm{
 public:
  virtual void sort(std::vector<Key>&, int) = 0;
  virtual void swap(Key *first, Key *second) = 0;
  virtual void print(std::vector<Key>&) = 0;
};

#endif /* B14853CD_4261_4D96_B4A6_A4D3F122F6B6 */
