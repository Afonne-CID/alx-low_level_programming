#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name string to be printed
 * @f: function call back
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) != NULL && name != NULL)
		(*f)(name);
}
