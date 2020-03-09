#include <stdio.h>

/**
 * main - print name of file program was compiled from
 *
 * Return: 0 upon success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
