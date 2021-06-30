ch19-01: ch19-01.o stackADT3.o
	gcc -o ch19-01 ch19-01.o stackADT3.o

ch19-01.o: ch19-01.c stackADT.h
	gcc -c ch19-01.c

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c

clean:
	rm ch19-01 *.o