all: bin/merge_sort

bin/merge_sort: obj/merge_sort.o obj/main.o
	g++ -std=c++11 -Wall -o bin/merge_sort obj/merge_sort.o obj/main.o

obj/merge_sort.o: src/merge_sort.cpp include/merge_sort.h
	g++ -std=c++11 -Wall -Iinclude -c src/merge_sort.cpp -o obj/merge_sort.o

obj/main.o: src/main.cpp include/merge_sort.h
	g++ -std=c++11 -Wall -Iinclude -c src/main.cpp -o obj/main.o

clean:
	rm -f obj/*.o bin/merge_sort
