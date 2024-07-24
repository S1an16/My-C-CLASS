main : Dog.o main.cpp British_Dog.o
	g++ main.cpp Dog.o British_Dog.o	

British_Dog.o : Dog.o British_Dog.cpp
	g++ British_Dog.cpp -c 

Dog.o : Dog.cpp Animal.h
	g++ Dog.cpp -c

clean :
	rm -rf *.o *.out
