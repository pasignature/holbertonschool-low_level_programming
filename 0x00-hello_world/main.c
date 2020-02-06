#include <stdio.h>
/* program entry point */
int main(){
  int a;
  int b;
  a = 2;
  b = 3;

  result = add2nums(a, b);

  printf(result);

}

/* function that adds two numbers and returns result to main */
int add2nums(int a, int b){
  int sum;

  sum = a + b;
  return sum;

}
