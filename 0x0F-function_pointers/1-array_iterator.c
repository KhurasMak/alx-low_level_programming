#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to print array and size
 * @array: is a pointer to size_t
 * @action: is a function pointer
 * @size: size of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
