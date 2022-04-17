CC=g++
CFLAGS=-I.
DEPS = ../include/SortingAlgorithm.hpp \
			 ../src/SelectionSort.hpp \
			 ../src/SelectionSort.cpp \
			 ../main.cpp \

OBJ =  ../src/SelectionSort.o \
			 ../main.o \


./%.o: %.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

ayeda-sorting: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS) 

clean:
		rm -rf *o ./ayeda-sorting
		rm -rf *o ../include/*.o
		rm -rf *o ../src/*.o
		rm -rf *o ../*.o