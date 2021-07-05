#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	x = 'a';
	for (; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
