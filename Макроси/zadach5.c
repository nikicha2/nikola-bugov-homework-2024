#include<stdio.h>
#define SWAP(A, B, TYPE) \
    TYPE temp = A; \
    A = B; \
    B = temp; 

int main()
{
    float a=4.14419;
    float b=12.3572;
    SWAP(a,b,float);
    printf("\n %f %f", a,b);
    return 0;
}
