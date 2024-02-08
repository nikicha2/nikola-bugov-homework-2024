#include "transformation.h"
#include <stdlib.h>
#include <stdio.h>
struct Transformation transformStringToLong(const char* input) {
    struct Transformation result;
    char* endptr;
    result.result = strtol(input, &endptr, 10);
    if (*endptr == '\0') {
        result.error[0] = '\0';
    } else {
        result.result = 0;
        snprintf(result.error, sizeof(result.error), "Invalid input string");
    }
    return result;
}
