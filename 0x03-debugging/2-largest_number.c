#include "holberton.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a < 0) || (b < 0) || (c < 0))
	  {
	    if (a < 0)
	      {
		a = a * -1;
	      }
	    else if (b < 0)
	      {
		b = b * -1;
	      }
	    else
	      {
		c = c * -1;
	      }
	  }

	if ((a > b) && (b > c))
	{
		largest = a;
	}
	else if ((b > a) && (a > c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
