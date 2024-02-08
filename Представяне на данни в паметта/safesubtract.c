#include<stdio.h>
#include<stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char **argv){
  struct SafeResult result;
  result = safesubtract(atoi(argv[1]), atoi(argv[2]));
  if(result.errorflag == '1'){
    ERROR_MESSAGE;
  }
  else{
    RESULT_MESSAGE(result);
  }
  return 0; 
}