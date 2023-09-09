#include <stdio.h>

/**
 * main - always main function
 *
 * Return: must always be 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
