#include<stdio.h>
#define DEBUG(a) printf("Promenliva: %s ima stoinost: %d na file: %s, liniq: %d ", #a,a,__FILE__, __LINE__)
int main()
{
    int a=27;
    DEBUG(a);
    return 0;
}