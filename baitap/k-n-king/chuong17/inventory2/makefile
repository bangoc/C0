inventory2: inventory2.o readline.o
	gcc -o inventory2 inventory2.o readline.o

inventory2.o: inventory2.c readline.h
	gcc -c inventory2.c

readline.o: readline.c readline.h
	gcc -c readline.c

clean:
	rm -f inventory2 *.o