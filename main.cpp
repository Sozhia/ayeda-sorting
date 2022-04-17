#include "./include/SortingAlgorithm.hpp"
#include "./src/SelectionSort.hpp"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <random>

void printHelp(); //Done
char askAlgorithm(); //Done
SortingAlgorithm<int>* createAlgorithm(char); // Done
int askSizeofSequence(); // Done
int insertElement(); // Done
int randomGeneration(); //Done


int main(int argc, char** argv) {
  if (argc == 2 && strcmp(argv[1], "--help")==0) {
		printHelp();
		exit(1);
	}
  if (argc != 1) {
    std::cout << "\t Try ./ayeda-sorting --help for more information."<< std::endl;
    exit(1);
	} else {
    SortingAlgorithm<int>* algorithm = createAlgorithm(askAlgorithm());
    std::vector<int> vector;
    vector.resize(askSizeofSequence());
    int counter = 0;
    do {
      vector[counter] = randomGeneration();
      counter ++;
    }while(counter < vector.size());
    algorithm->sort(vector, vector.size());
  }
  return 0;
}

char askAlgorithm() {
  char aux;
  std::cout << "\t Please enter the type of Algortihm."<< std::endl;
  std::cout << "\t (S)electionSort ; (Q)uickSort ; (S)hellSort ; (H)eapSort : (R)adixSort " << std::endl;
  std::cout << "\t Otherwise press Ctrl + C to exit."<< std::endl;
  std::cin >> aux;
  return aux;
}

int askSizeofSequence() {
  int aux;
  std::cout << "\t Please enter the size of the sequence to sort (Integer values)."<< std::endl;
  std::cin >> aux;
  return aux;
}

int insertElement(){
  try{
    int aux;
    std::cout << "\t Please enter a number."<< std::endl;
    std::cin >> aux;
    return aux;
  }catch (...) {
    std::cout << "Unexpected value." << std::endl;
  }
}

int randomGeneration(){
  //the random device that will seed the generator
  std::random_device seeder;
  //then make a mersenne twister engine
  std::mt19937 engine(seeder());
  //then the easy part... the distribution
  std::uniform_int_distribution<int> dist(1000, 9999);
  //then just generate the integer like this:
  return dist(engine);
}

void printHelp() {
    std::cout << "This is an implementation of a couple of Sorting Algorithms"<< std::endl;
    std::cout << "in the C++ programming language for academic purposes."<< std::endl;
    std::cout << "To run the program in your local machine check out the following steps:"<< std::endl;
    std::cout << "\t 1.- ./ayeda-sorting "<< std::endl;
    std::cout << "\t 2.- You must select the algorithm manually (X) and the length of the vector"<< std::endl;
    std::cout << "\t 3.- Select manually or random to fill the vector (random values between 1000 and 9999 )."<< std::endl;
    std::cout << "\t 4.- The program will trace the sorting method"<< std::endl;
}

SortingAlgorithm<int>* createAlgorithm(char letter) {
  SortingAlgorithm<int>* algorithm;
  switch(letter){
    case 'S':
      algorithm = new SelectionSort<int>();
      break;
    default:
      algorithm = new SelectionSort<int>();
      break;
  }
  return algorithm;
}