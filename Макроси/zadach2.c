#include<stdio.h>
#define IDK(a,b) c=a>b?a:b
int main()
{
    int a=7,b=10;
    int c=0;
    IDK(a,b);
    printf("\n %d", c);
    return 0;
}