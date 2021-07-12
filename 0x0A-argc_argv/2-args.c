#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 * @argc: parameter 1
 * @argv: parmater 2
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int cnt;

	for (cnt = 0; cnt < argc; cnt++)
	{
		printf("%s\n", argv[cnt]);
	}

	return (0);
}
