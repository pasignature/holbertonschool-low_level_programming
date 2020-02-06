#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void){
  int a;
  int b;
  int result;
  result = add2nums(a, b);
  printf("%d", result);
  return (0);
}
/* function to compute sum of two numbers */
int add2nums(int a, int b){
  int sum;
  sum = a + b;
  return sum;

}
