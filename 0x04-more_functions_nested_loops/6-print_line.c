#include "main.h"

/**
 * print_line - prints an underscore n times
 *
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
