/**
 * C program to print first n Fibonacci numbers
 * 
 * Return: fibonacci series
 */
 
#include <stdio.h> 

void printFibonacciNumbers(int n) 
{ 
long int f1 = 0, f2 = 1, i; 

if (n < 1) 
return; 

for (i = 1; i <= n; i++) 
{ 
printf("%lu ", f2); 
int next = f1 + f2; 
f1 = f2; 
f2 = next; 
} 
} 

int main() 
{ 
printFibonacciNumbers(88); 
return 0; 
}
