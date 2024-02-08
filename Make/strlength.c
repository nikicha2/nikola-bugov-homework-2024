#include<stdio.h>
#include"mystrings.c"
int main(int argc, char** argv)
{
    if (argc != 2) 
    {
        printf("Error in  %s", argv[0]);
        return 1;
    }
    printf("\n lenght of %s: %d", argv[1], strlength(argv[1]));
    return 0;
}