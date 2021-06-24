#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 * 
 * Return: Always 0
 */
int main(void)
{
  char fizzbuzz;
  char mult3;
  char mult5;
  int count;

  fizzbuzz = "FizzBuzz";
  mult3 = "Fizz";
  mult5 = "Buzx";
 
  for (count = 1; count <= 100; count++)
    {
      printf("%d ", count);
	 }
  
  putchar('\n');
  
  return (0);
}
