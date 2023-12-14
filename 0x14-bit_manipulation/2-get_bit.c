#include "main.h"
/**
 * get_bit - get the value of a bit a given index
 * @n: the number to check the value
 * @index: the index of the bit to be gotten
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 8 * sizeof(size_t))
		return (-1);

	for (i = 0; 1 < index; i++)
		n = n >> 1;
	return (n & 1);
}
