all : test_polymorph

test_polymorph: test_polymorph.o Character.o Yoshi.o 
	g++ test_polymorph.o Character.o Yoshi.o -o test_polymorph -std=c++11
	
test_polymorph.o: test_polymorph.cpp Character.h Yoshi.h
	g++ -c test_polymorph.cpp -o test_polymorph.o -std=c++11
	
Character.o: Character.cpp Character.h
	g++ -c Character.cpp -Wall -o Character.o --std=c++11 

Yoshi.o : Yoshi.cpp Character.h Yoshi.h 
	g++ -c Yoshi.cpp -Wall -o Yoshi.o --std=c++11 

clean : 
	rm -f *.o
