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
  int sum = 0, i = 0, r;

  char a[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char password[100];

  srand(time(NULL));

  while (sum < 2650)
    {
      r = rand() % 62;
      password[i] = a[r];
      sum = sum + password[i];
      i++;
    }

  password[i] = 2772 - sum;
  printf("%s\n",  password);
  return (0);
}
