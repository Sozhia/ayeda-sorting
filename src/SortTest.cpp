#ifndef _SORTTESTCPP_
#define _SORTTESTCPP_

#include "./SortTest.hpp"
#include <vector>

template<class Key>
SortTest<Key>::SortTest(std::vector<Key>& vector, unsigned int size, SortingAlgorithm<Key>* strategy) {
  strategy_ = strategy;
  n_ = size;
  vector_ = vector;
}

template<class Key>
void SortTest<Key>::setStrategy(SortingAlgorithm<Key>* strategy) { strategy_ = strategy; }

template<class Key>
void SortTest<Key>::go() { strategy_->sort(vector_, n_); }

#endif /* _SORTTESTCPP_ */