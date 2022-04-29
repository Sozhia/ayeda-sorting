CC=g++
CFLAGS=-I.
DEPS = ../include/SortingAlgorithm.hpp \
			 ../src/SortTest.hpp \
			 ../src/SortTest.cpp \
			 ../src/SelectionSort.hpp \
			 ../src/QuickSort.hpp \
			 ../src/HeapSort.hpp \
			 ../src/ShellSort.hpp \
			 ../ayeda-sorting.cpp

OBJ =  ../ayeda-sorting.o \
			 ../src/SortTest.o


./%.o: %.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

ayeda-sorting: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS) 

clean:
		rm -rf *o ./ayeda-sorting
		rm -rf *o ../include/*.o
		rm -rf *o ../src/*.o
		rm -rf *o ../*.o