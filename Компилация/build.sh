gcc -c maths.c -o maths.o
ar rcs libmaths.a maths.o
gcc main.c -L. -lmaths -o main.