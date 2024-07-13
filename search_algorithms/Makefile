all: bin/binary_search

bin/binary_search: obj/binary_search.o
	g++ -std=c++11 -Wall -o bin/binary_search obj/binary_search.o

obj/binary_search.o: src/binary_search.cpp include/binary_search.h
	g++ -std=c++11 -Wall -Iinclude -c src/binary_search.cpp -o obj/binary_search.o

clean:
	rm -f obj/*.o bin/binary_search