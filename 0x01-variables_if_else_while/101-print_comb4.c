#include <stdio.h>

/**
 * main - prints all different combinations
 * of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (n > m)
			{
				for (o = 48; o <= 57; o++)
				{
					if (o > n)
					{
						putchar(m);
						putchar(n);
						putchar(o);
					if (m != 55 || n != 56 || o != 57)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
