#include <unistd.h>

/**
 * _putchar - puts charater on console
 * @c: - charater to be printed
 *
 * Return: result
 */
char c(char *c)
{
	return (write(1, &c, 1));
}
