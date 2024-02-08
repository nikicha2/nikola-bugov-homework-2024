all: strlength.out strconcat.out strcompare.out

strlength.out: strlength.c mystrings.o
	gcc -o strlength.out strlength.c mystrings.o

strconcat.out: strconcat.c mystrings.o
	gcc -o strconcat.out strconcat.c mystrings.o

strcompare.out: strcompare.c mystrings.o
	gcc -o strcompare.out strcompare.c mystrings.o

mystrings.o: mystrings.c mystrings.h
	gcc -c -o mystrings.o mystrings.c

clean:
	rm -f *.o *.out
