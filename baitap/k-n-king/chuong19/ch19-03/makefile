stackclient3: stackADT3.o stackclient.o
	gcc -o stackclient3 stackADT3.o stackclient.o

stackADT3.o: stackADT3.c stackADT.h
	gcc -c stackADT3.c

stackclient.o: stackclient.c stackADT.h
	gcc -c stackclient.c

clean:
	rm stackclient3 *.o