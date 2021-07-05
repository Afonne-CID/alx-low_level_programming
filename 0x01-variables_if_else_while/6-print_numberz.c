#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 0;
	for (; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	putchar('\n');

	return (0);
}
