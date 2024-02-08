#include"maths.h"
int fact1(int n)
{
    if (n<2) {
        return 1;
    } else {
        return n*fact1(n - 1);
    }
}