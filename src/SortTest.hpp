#ifndef _SORTTESTHPP_
#define _SORTTESTHPP_

#include "../include/SortingAlgorithm.hpp"
#include <vector>
#include <iostream>

template<class Key>
class SortTest{
 public:
  SortTest(std::vector<Key>&, int, SortingAlgorithm<Key>*);
  void setStrategy(SortingAlgorithm<Key>*);
  void go();
 private:
  SortingAlgorithm<Key>* strategy_;
  std::vector<Key> vector_;
  int n_;

};

#endif /* _SORTTESTHPP_ */