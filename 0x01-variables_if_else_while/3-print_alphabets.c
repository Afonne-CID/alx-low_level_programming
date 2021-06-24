#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int y;

	x = 'a';
	for (; x <= 'z'; x++)
	{
		putchar(x);
	}

	y = 'A';
	for (; y <= 'Z'; y++)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
