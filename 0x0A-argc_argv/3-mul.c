#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: param 1
 * @argv: param 2
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int product, j, i;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		product = i * j;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
