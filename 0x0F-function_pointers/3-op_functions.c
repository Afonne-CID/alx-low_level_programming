#include "3-calc.h"
#include "stdio.h"

/**
 * op_add - returns the sum of two integers
 * @a:	first int to add
 * @b:	second int to add
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a:	first int
 * @b:	second int
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two ints
 * @a:	first int
 * @b:	seocnd int
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient  of two ints
 * @a:	first int
 * @b:	second int
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulo  of two ints
 * @a:	first int
 * @b:	second int
 *
 * Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
