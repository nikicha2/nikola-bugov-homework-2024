#include"util.h"
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char** argv)
{
    if(argc!=2)
    {
        printf("Error in %s",argv[0]);
        return EXIT_FAILURE;
    }
    else 
    {
        int a=atoi(argv[1]);
        printf("\n cubic of %d is %d", a,QUBIC(a));
        return EXIT_SUCCESS;
    }
}