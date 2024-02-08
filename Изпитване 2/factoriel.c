#include"util.h"
#include"util.c"
#include<stdio.h>
#include<stdlib.h>
int main(int argc , char** argv)
{
    if(argc!=2)
    {
        printf("Error in %s",argv[0]);
        return EXIT_FAILURE;
    }
    else 
    {
        int a=atoi(argv[1]);
        printf("\n factoriel of %d is %d", a,factoriel(a));
        return EXIT_SUCCESS;
    }
}