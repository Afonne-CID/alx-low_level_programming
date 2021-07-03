#include <unistd.h>

/**
 * _putchar - Writes to stdout
 * Return: value
 */
char _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
