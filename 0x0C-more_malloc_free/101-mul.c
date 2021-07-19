#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#define ERR_MSG "Error"

int is_digit(char *s);

/** 
 * main -Entry point
 * @argc: number of commaline inputs
 * @argv: the actual commanline inputs
 *
 * Return: Sum
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		for (i = 0; ERR_MSG[i] != '\0'; i++)
		{
			_putchar(ERR_MSG[i]);
		}
		_putchar(10);
		exit(98);
	}
	if (is_digit(argv[1]) == 0)
			printf("%s\n", argv[1]);
	return (0);
}

/**                                                            
 * is_digit - checks a string for digits                       
 * @s: the string parameter                                    
 *                                                             
 * Return: answer                                              
 */                                                            
int is_digit(char *s)                                          
{                                                              
	while (*s)                         
	{
		if (*s < 48 || *s > 57)
			return (1);
		s++;
	}
	return (0);
}
