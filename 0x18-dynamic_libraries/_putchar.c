#include <unistd.h>

/**
 * _putchar - Writes to stdout
 * @c: ascii character
 * Return: value
 */
char _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
