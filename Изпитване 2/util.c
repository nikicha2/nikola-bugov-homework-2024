#include "util.h"
int factoriel(int n)
{
    if(!n) return 1;
    else return n*factoriel(n-1);
}
