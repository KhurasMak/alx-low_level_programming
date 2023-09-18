#include "main.h"

/**
 * swap_int - swap two intege
 * @a: value 1
 * @b: value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
