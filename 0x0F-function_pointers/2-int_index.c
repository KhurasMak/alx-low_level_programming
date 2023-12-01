#include <stdio.h>
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size to array
 * @cmp: function pointer
 * Return: index of -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}