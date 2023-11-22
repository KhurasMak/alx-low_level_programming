#include <stdio.h>
#include <stdlib.h>

/**
 *main - print multiplication arguments
 *@argc: argument conut
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int nom1, nom2, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		nom1 = atoi(argv[1]);
		nom2 = atoi(argv[2]);

		mul = nom1 * nom2;
		printf("%d\n", mul);
	}
	return (0);
}
