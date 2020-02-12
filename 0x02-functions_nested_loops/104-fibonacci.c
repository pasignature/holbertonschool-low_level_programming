#include <stdio.h>

/**
* main - prints the first 98 fibonacci numbers
*
* Description: fibonacci numbers starting from one
* Return: 0
 */

int main()
{
  int i, terms=98;

  /* Fibonacci magic initialization */
  long int a = 1, b = 1, c = 1;

  printf("Fibonacci terms: \n");

  /* Iterate through n terms */
  for(i=1; i<=terms; i++)
    {
      printf("%lu, ", c);

      a = b;     // Copy n-1 to n-2
      b = c;     // Copy current to n-1
      c = a + b; // New term
    }

  return 0;
}
