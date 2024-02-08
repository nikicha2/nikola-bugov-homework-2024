#include <stdio.h>
#define DEBUG

void vsichko(int *a, int n) {
    int swap,s=0,i,j;
    for(i = 0; i < n - 1; i++){
      for(j = 0; j < n - i - 1; j++){
         if(a[j]>a[j+1]){
            swap = a[j];
           a[j] = a[j + 1];
           a[j + 1] = swap;
          }
     }
    }
    #ifdef DEBUG
        for(i = 0; i < n; i++) {
            printf("a[%d] = %d\n", i, a[i]);
        }
        printf("\nElements at an index that is divisible by 3:\n");
        for(i = 3; i < n; i+=3) {
            printf("%d ", a[i]);
            s+=a[i];
        }
        printf("Sum of elements of the array that are at an index divisible by 3: %d\n", s);
    #endif
}

int main() {
    int a[] = {2, 6, 143, 24, 8, 2, 6, 5};
    int n=8;
    vsichko(a, n);
    return 0;
}