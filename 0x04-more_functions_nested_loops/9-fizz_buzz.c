#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char fizzbuzz[] = "FizzBuzz";
	char mult3[] = "Fizz";
	char mult5[] = "Buzz";
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 != 0)
		{
			printf("%s ", mult3);
		}
		else if (count % 5 == 0 && count % 3 != 0)
		{
			printf("%s ", mult5);
		}
		else if (count % 3 == 0 && count % 5 == 0)
		{
			printf("%s ", fizzbuzz);
		}
		else
		{
			printf("%d ", count);
		}
	}

	putchar('\n');

	return (0);
}
