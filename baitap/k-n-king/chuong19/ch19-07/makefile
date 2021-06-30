queueclient7: queueclient.o queueADT.o
	gcc -o queueclient7 queueclient.o queueADT.o

queueclient.o: queueclient.c queueADT.h
	gcc -c queueclient.c

queueADT.o: queueADT.c queueADT.h
	gcc -c queueADT.c

clean:
	rm queueclient7 *.o