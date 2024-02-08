#include<stdio.h>
#define INP int a[5]={1 , 2 , 3 , 4 , 5};
#define OUT for(int i=0; i < n;i++) printf("%d ", a[i]);

int main()
{
    INP;
    int n=sizeof a/ sizeof a[0];
    OUT;
    return 0;
}
