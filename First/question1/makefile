name: name.o name_reverse.o name_length.o
	gcc name.o name_reverse.o name_length.o -o name

name.o: name.c
	gcc -c name.c

name_reverse.o: name_reverse.c name_reverse.h
	gcc -c name_reverse.c

name_length.o: name_length.c name_length.h
	gcc -c name_length.c

clean:
	rm *.o name