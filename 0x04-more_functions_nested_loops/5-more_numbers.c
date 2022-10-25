#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int counter;
	int d = 0;

	for (counter = 0; counter <= 9; counter++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			{
				_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
