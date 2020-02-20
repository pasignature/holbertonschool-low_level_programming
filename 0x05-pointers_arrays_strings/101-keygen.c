#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to generate random password
 *
 * description: find checksum value from objdump
 *
 * Return: Return generated password
 */

int main(void)
{
  int sum = 0, i = 0, randnum;

  char a[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  char password[100];

  srand(time(NULL));

  while (sum < (2772 - 122))
    {
      randnum = rand() % 62;
      password[i] = a[randnum];
      sum = sum + password[i];
      i++;
    }
  
  r = 2772 - sum;
  password[i] = r;
  /* printf("%i\n%i\n%s\n",  randnum,sum,password); */
  printf("%s\n",  password);
  return (0);
}
