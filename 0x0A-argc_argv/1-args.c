#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argment vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int cnt;

	if (argc > 1)
	{
		for (cnt = 0; cnt < argc;)
		{
			cnt++;
		}
		printf("%d\n", cnt - 1);
	}
	else
		printf("%d\n", 0);
	return (0);

}
