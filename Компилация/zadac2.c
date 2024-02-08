#include <stdio.h>

int main() {
    int a = 12, b = 18, nok = 1;
    int del = 2;

    while (a > 1 || b > 1) {
        if (a % del == 0 && b % del == 0) {
            a /= del;
            b /= del;
            nok *= del;
        } else {
            if (a % del == 0) {
                a /= del;
                nok *= del;
            } else {
                if (b % del == 0) {
                    b /= del;
                    nok *= del;
                } else {
                    del++;
                }
            }
        }
    }

    printf("\n %d", nok);
    return 0;
}
