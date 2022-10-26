#include "main.h"

/**
 * print_diagonal - prints a diagonal line of lenght n
 *
 * @n: length of diagonal
 *
 */
void print_diagonal(int n)
{
	int c, d;

	if (n < 0)
	{
		_putchar('\n');
	}
	for (c = 0; c < n; a++)
	{
		for (d = 0; d < a; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
