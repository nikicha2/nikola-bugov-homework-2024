#include<stdio.h>
#define SWAP(A, B, TYPE) {\
    TYPE temp = A; \
    A = B; \
    B = temp; \
}
#define SORT(ARRAY,SIZE,TYPE,COMPARE) { \
    for(int i=0;i<SIZE-1;i++) {\
        for(int j=0;j<SIZE-i-1;j++){ \
            if(ARRAY[j] COMPARE ARRAY[j+1])  SWAP(ARRAY[j],ARRAY[j+1],TYPE) \
         } \
    }\
}

int main() 
{
    int array[] = {5, 2, 9, 1, 5};
    int n = 5;
    SORT (array, n, int, >);
    printf("\n Sorted array (ascending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    SORT (array, n, int, <);
    printf("\n Sorted array (descending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}