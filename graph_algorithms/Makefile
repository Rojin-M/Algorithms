all: dfs

dfs: obj/dfs.o obj/main.o
	g++ -std=c++11 -Wall -o bin/dfs obj/dfs.o obj/main.o

obj/dfs.o: src/dfs.cpp include/dfs.h
	g++ -std=c++11 -Wall -Iinclude -c src/dfs.cpp -o obj/dfs.o

obj/main.o: src/main.cpp
	g++ -std=c++11 -Wall -Iinclude -c src/main.cpp -o obj/main.o

clean:
	del /Q obj\*.o
	del /Q bin\dfs.exe
