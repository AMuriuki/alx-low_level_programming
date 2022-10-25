#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: input argument with string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
