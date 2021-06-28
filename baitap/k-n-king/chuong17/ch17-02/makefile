inventory: inventory.o readline.o
	gcc -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c

clean:
	rm -f inventory *.o