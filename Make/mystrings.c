//mystrings.c
#include<stdio.h>
#include"mystrings.h"
int strlength(char* a)
{
    int i;
    for(i=0;a[i]!=0;i++);
    return i;
}
void strconcat(char* a, char* b)
{
    int i, j;
    int len_a = strlength(a);
    for (i = 0; b[i]!=0; i++) {
        a[len_a+i] = b[i];
     }
    a[i] = '\0';
}
int strcompare(char* a, char* b)
{
    int i,j;
    for(i=0;a[i]&&b[i];i++)
    {
        if(a[i]>b[i])
        {
            return 1;
        }
        if(a[i]<b[i])
        {
            return -1;
        }
    }
    if(!a[i])
    {
        if(!b[i])
        {
            return 0;
        }
        else 
        {
            return -1;
        }
    }
    else 
    {
        return 1;
    }
}