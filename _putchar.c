#include "shell.h"

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
