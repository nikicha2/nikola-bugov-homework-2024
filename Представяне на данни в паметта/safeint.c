#include<stdio.h>
#include"safeint.h"
#include<stdlib.h>
#include<limits.h>
struct SafeResult safeadd(int a, int b){
  struct SafeResult result; 
  result.errorflag = '0'; 
  if((a > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MAX - b )){
    result.errorflag = '1'; 
    return result;
  }
  result.value = a + b;
  return result;
}

struct SafeResult safesubtract(int a, int b) {
  struct SafeResult result; 
  result.errorflag = '0'; 
  if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
    result.errorflag = '1'; 
    return result;
  }
  result.value = a - b; 
  return result; 
}

struct SafeResult safemultiply(int a, int b){
  struct SafeResult result;
  result.errorflag = '0'; 
  if(a > 0){
    if(b > 0 && a > INT_MAX / b){
      result.errorflag = '1';
      return result; 
    }
    if(b <  0 && a < INT_MAX / b){
      result.errorflag = '1'; 
      return result; 
    }
  }
  else if(a < 0){
    if(b > 0 && a < INT_MAX / b){
      result.errorflag = '1';
      return result; 
    }
    if(b <  0 && a < INT_MAX / b){
      result.errorflag = '1'; 
      return result; 
  }
}
  result.value = a * b;
  return result; 
}

struct SafeResult safedivide(int a, int b){
  struct SafeResult result;
  result.errorflag = '0';
  if(b == 0){
    result.errorflag = '1';
    return result;
  }
  if(a == INT_MIN && b == -1){
    result.errorflag = '1';
    return result; 
  }
  result.value = a / b;
  return result;
}

struct SafeResult safestrtoint(char c[]){
  struct SafeResult result; 
  int digit, sign = 0, i = 0;
  result.errorflag = '0';
  result.value = 0; 

  if(c[0] == '-'){
    sign = 1;
    i = 1;
  }

  for(; c[i] != '\0'; i++){
    if(c[i] >= '0' && c[i] <= '9'){
      safemultiply(result.value, 10);
      safeadd(result.value, c - '0');
  }
  else{
    result.value = 0;
    result.errorflag = '1';
    return result;
  }
  if(sign){
    result.value *= -1;
  }
  return result; 
  }
}