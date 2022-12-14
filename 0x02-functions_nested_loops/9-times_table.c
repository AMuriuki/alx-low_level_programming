#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			int result = row * col;

			if (result < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
				if (col < 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

				if (col < 9)
				{
					_putchar(',');

				}
			}

		}
		_putchar('\n');
	}
}
