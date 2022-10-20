#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number
 *
 * Return: 1 if n is positive 0 if n is 0 -1 if n is negative
 */
int print_sign(int n)
{
	char p = '+';
	char z = '0';
	char _n = '-';

	if (n > 0)
	{
		_putchar(p);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(z);
		return (0);
	}
	else
	{
		_putchar(_n);
		return (-1);
	}
}
