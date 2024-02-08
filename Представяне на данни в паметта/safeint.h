#ifndef SAFEIN_H
#define SAFEIN_H
#include<stdio.h>
struct SafeResult{
    int value;
    char errorflag;
};
struct SafeResult safeadd(int a, int b);
struct SafeResult safesubtract(int a, int b);
struct SafeResult safemultiply(int a, int b); 
struct SafeResult safedevide(int a, int b);
struct SafeResult safestrtoint(char c[]);
#endif
