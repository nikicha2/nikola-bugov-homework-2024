#include "transformation.h"
#include <stdio.h>

int main() {
    const char* input1 = "-123";
    const char* input2 = "12ab23";

    struct Transformation result1 = transformStringToLong(input1);
    struct Transformation result2 = transformStringToLong(input2);

    printf("Input: \"%s\" => Output: result = %ld, error = \"%s\"\n", input1, result1.result, result1.error);
    printf("Input: \"%s\" => Output: result = %ld, error = \"%s\"\n", input2, result2.result, result2.error);

    return 0;
}