#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 exclude 2 and 4
 */
void print_most_numbers(void)
{
	int d = 0;

	while (d <= 9)
	{
		if (d != 2 && d != 4)
		{
			_putchar(d + '0');
		}
		d++;
	}
	_putchar('\n');
}
