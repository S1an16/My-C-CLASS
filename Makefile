main : sort.o
	g++ test.cpp sort.o -o exe.out

sort.o :
	g++ sort.cpp -o

clean :
	rm *.o *.out
