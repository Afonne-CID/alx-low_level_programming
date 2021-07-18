#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point is a program that multiplies two positive numbers
 * @num1: first param (argc)
 * @num2: second param (argv)
 *
 * Return: product of two numbers
 */
int main(int num1, char **num2)
{
	int j, i, cnt, mul;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	if (num1 < 2 || num1 > 2)
		exit(0);
	for (i = 0; i < num1; i++)
	{
		for (cnt = 0; arr[cnt]; cnt++)
		{
			if (!(*(num2 + i) == arr[cnt] || *(num2 + i) == arr[cnt]))
				exit(98);
		}
	}
	for (i = 0; i < num1; i++)
	{
		for (j = 0; arr[j]; j++)
		{
			
			if (num[i] == arr[j])
			{
				mul = *(num2 + i) * *(num2 + j);
			}
			mul % 10 ? _putchar(mul / 10) : _putchar(mul % 10);
		}
		_putchar('\n');
	}
}
