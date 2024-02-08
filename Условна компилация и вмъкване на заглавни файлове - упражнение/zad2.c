#include<stdio.h>
#ifndef ARRAY_SIZE
#define ARRAY_SIZE 11
#endif
#if ARRAY_SIZE <= 100 && ARRAY_SIZE>=1
int main()
{
    int arr[ARRAY_SIZE],p=1;
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        arr[i]=1*p;
        p*=2;
        printf("\n %d", arr[i]);
    }
    return 0;
}
#else
int main()
{
    printf("\n Nevaliden array size");
    return 0;
}
#endif