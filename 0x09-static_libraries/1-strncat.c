#include "main.h"
#include "string.h"

/**
 * _strncat - conctenates two strings
 * @dest: destination string
 * @src: soyrce string
 * @n: mumber of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
