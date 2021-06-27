ch16-01: ch16-01.o country_codes.o
	gcc -o ch16-01 ch16-01.o	country_codes.o

ch16-01.o: ch16-01.c country_codes.h
	gcc -c ch16-01.c

country_codes.o: country_codes.c country_codes.h
	gcc -c country_codes.c

clean:
	rm -f ch16-01 *.o