CC=g++
CFLAGS=-I.
DEPS = ../lib/

OBJ =  ../lib/

./%.o: %.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

ayeda-sorting: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS) 

clean:
		rm -rf *o ./ayeda-sorting
		rm -rf *o ../lib/*.o
		rm -rf *o ../*.o