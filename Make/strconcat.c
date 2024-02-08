#include "mystrings.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error in %s", argv[0]);
        return 1;
    }
    if(strlength(argv[1])>50) printf("\n too many characters");
    if(strlength(argv[2])>50) printf("\n too many characters");
    char* result[100];
    strcpy(result,argv[1]);
    strconcat(result,argv[2]);
    printf("%s\n", result);
    return 0;
}