#include <stdio.h>

/**
 *main - prints number of arguments passed
 *@argc: argues count
 *@argv: argues vector
 *return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
