ch19-02: ch19-02.o stackADT3.o
	gcc -o ch19-02 ch19-02.o stackADT3.o

ch19-02.o: ch19-02.c stackADT.h
	gcc -c ch19-02.c

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c

clean:
	rm ch19-02 *.o