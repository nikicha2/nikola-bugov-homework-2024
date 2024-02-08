#include <stdio.h>
void bubble_sort(int arr[], int n) {
    int swap;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}
void selection_sort(int arr[], int n) {
    int swap,min;
    for (int i = 0; i < n-1; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap = arr[min];
        arr[min] = arr[i];
        arr[i] = swap;
    }
}
void insertion_sort(int arr[], int n) {
    int promenliva,j;
    for (int i = 1; i < n; i++) {
        promenliva = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > promenliva) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = promenliva;
    }
}
void reversed(int arr[], int n) {
    int swap;
    for(int i=0; i<n/2; i++) {
        swap = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = swap;
    }
}
int main() {
    int a[] = {45,1,24,514,-54};
    int n = 5;

    #ifdef _WIN32
        bubble_sort(a, n);
    #elif __linux__
        selection_sort(a, n);
    #elif __APPLE__
        insertion_sort(a, n);
    #else
        reversed(a, n);
    #endif

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}