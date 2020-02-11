#include "holberton.h"

/**
*_abs - returns absolute value of integer
*
* @a: int type
*
* Return: return absolute value of integer
*/

int _abs(int a)
{
if (a < 0)
a = -a;
return (a);
}
