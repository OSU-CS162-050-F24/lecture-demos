CXX = g++ -g

my_program: main.o person.o hello.o
	$(CXX) main.o person.o hello.o -o my_program

main.o: main.cpp
	$(CXX) -c main.cpp

person.o: person.cpp
	$(CXX) -c person.cpp

hello.o: hello.cpp
	$(CXX) -c hello.cpp

clean:
	rm -f *.o my_program
