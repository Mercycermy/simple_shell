#include "shell.h"
/**
 * printnumbers - Prints numbers, used to print the error message
 * @n: number to print
 * Return: Number
 */

int printnumbers(int n)
{
	unsigned int number;
	int i = 0;

	if (n < 0)
	{
		number = -n;
		i = i + _putchar('-');
	}
	else
	{
		number = n;
	}
	if (number / 10 != '\0')
		i = i + printnumbers(number / 10);
	i = i + _putchar(number % 10 + '0');
	return (i);
}
