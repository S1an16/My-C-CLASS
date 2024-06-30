main : sort.o
	g++ test.cpp sort.o -o exe.out

sort.o :
	g++ sort.cpp -c

clean :
	rm *.o *.out
