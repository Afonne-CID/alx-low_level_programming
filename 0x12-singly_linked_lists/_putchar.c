#include <unistd.h>

/**
 * _putchar - prints character on the stdout
 * @c: character to be printed
 *
 * Return: count of printed characters
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
