main:
	g++ -o main main.cpp


big_O_write: rand_create big_O
	./rand
	./big_O
	rm rand*.in
rand_create: 
	g++ -o rand rand_create.cpp
big_O: big_O_test.o Clock.o
	g++ -o big_O big_O_test.o Clock.o
big_O_test.o:
	g++ -c big_O_test.cpp
Clock.o:
	g++ -c Clock.cpp


clean:
	rm *.o
