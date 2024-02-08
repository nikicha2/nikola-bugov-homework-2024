#include <stdio.h>
#include <math.h>
void powerFourth(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}
int main() {
    long arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    powerFourth(arr, size);
    printf("Масивът след повдигане на четвърта степен:\n");
    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }
    return 0;
}