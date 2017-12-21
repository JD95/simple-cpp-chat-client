make: main.o
	g++ -o main main.o -lncurses 

clean:
	rm -f main *.o *~
